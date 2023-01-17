class WebSocketRpcMethodClient {
    constructor(service_client, name, request_class, response_class) {
        this.service_client = service_client;
        this.name = name;
        this.request_class = request_class;
        this.response_class = response_class;
    }
    _call(request, resolve, reject) {
        let meta_request = new proto.MetaRequest([`${this.service_client.service_name}.${this.name}`, request.serializeBinary()]);
        this.service_client.wrpc_client.ws.send(meta_request.serializeBinary());
        this.service_client.wrpc_client.ws.onmessage = ev => {
            ev.data.arrayBuffer().then(res => {
                let data = proto.MetaResponse.deserializeBinary(res);
                let sum_result = this.response_class.deserializeBinary(data.getResponse());
                resolve(sum_result.toObject());
            });
        };
    }
    call(args) {
        return new Promise((resolve, reject) => {
            let request = new this.request_class(Object.values(args));
            if (this.service_client.wrpc_client.ws === null) {
                this.service_client.wrpc_client.ws = new WebSocket(this.service_client.wrpc_client.url)
                this.service_client.wrpc_client.ws.onopen = () => {
                    this._call(request, resolve, reject)
                }
            } else {
                this._call(request, resolve, reject)
            }
        })
    }
}

class WebSocketRpcServiceClient {
    constructor(wrpc_client, service_name) {
        this.wrpc_client = wrpc_client;
        this.service_name = service_name;
    }
    method(name, request_class, response_class) {
        return new WebSocketRpcMethodClient(this, name, request_class, response_class);
    }
}

class WebSocketRpcClient {
    constructor(url) {
        this.url = url;
        this.ws = null;
    }
    service(service_name) {
        return new WebSocketRpcServiceClient(this, service_name);
    }
    
}