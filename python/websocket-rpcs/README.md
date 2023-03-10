rpc over websocket uses protobuf to serialize data

## Prepare

### install package
```bash
pip install websocket-rpcs
```

### write proto file (math.proto)
```proto
syntax = "proto3";

option py_generic_services = true;

message SumArg {
    int32 a = 1;
    int32 b = 2;
}

message SumResult {
    int32 sum = 1;
}

service Math {
    rpc Sum(SumArg) returns (SumResult);
}
```

### generate python file (math_pb2.py math_pb2.pyi)
```bash
protoc --python_out=. --pyi_out=. math.proto
```

## Example

### Server

```python
import wrpc
import math_pb2
def sum(args):
    return {
        "sum": args["a"] + args["b"]
    }
wrpc_server = wrpc.WebSocketRPCServer("0.0.0.0", 5887)
wrpc_server.add_handler("Math.Sum", sum_pb2.SumArg,sum_pb2.SumResult, sum)
wrpc_server.start()
```

### Client

```python
import wrpc
import math_pb2
wrpc_client = wrpc.WebSocketRpcClient("ws://localhost:5887")
sum_client = wrpc_client.init(sum_pb2.Sum_Stub, sum_pb2.SumArg, sum_pb2.SumResult)
res = sum_client.call("Sum", a=1, b=2)
```