import wrpc
import math_pb2

def add(args):
    return {
        "sum": args["a"] + args["b"]
    }

wrpc_server = wrpc.WebSocketRPCServer("0.0.0.0", 5887)
wrpc_server.add_handler("Math.Sum", math_pb2.SumArg, math_pb2.SumResult, add)
wrpc_server.start()