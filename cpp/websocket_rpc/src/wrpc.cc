#include "wrpc.h"

#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using google::protobuf::Message;
using dict = map<string, shared_ptr<void>>;
using Handler = dict (*)(dict *);

struct HandlerInfo
{
    Message *request_class;
    Message *response_class;
    Handler handler;
};

class WebSocketRpcServer
{
public:
    string host;
    unsigned short port;
    vector<HandlerInfo> handler_infos;

    WebSocketRpcServer(const string &host, unsigned short port) : host(host), port(port)
    {
    }
    void start(bool block = true)
    {
    }
    void add_handler(string full_name, Message *request_class, Message *response_class, Handler handler)
    {
    }
};

dict add(dict *args)
{
    dict result;
    int a = *(int *)args->at("a").get();
    int b = *(int *)args->at("b").get();
    result.insert(pair<string, shared_ptr<void>>("sum", make_shared<int>(a + b)));
    return result;
}

int main()
{
    WebSocketRpcServer server("0.0.0.0", 5887);
    server.add_handler("Math.Sum", &SumArg(), &SumResult(), add);
    server.start();
    dict args{
        {"a", make_shared<int>(1)},
        {"b", make_shared<int>(2)}};
    dict result = add(&args);
    cout << "sum ";
    cout << *(int *)result.at("sum").get() << endl;
    return 0;
}