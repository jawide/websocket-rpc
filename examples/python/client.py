import wrpc
import math_pb2

wrpc_client = wrpc.WebSocketRpcClient("ws://localhost:5887")
math_client = wrpc_client.service(math_pb2.Math_Stub)
sum_client = math_client.method("Sum", math_pb2.SumArg, math_pb2.SumResult)

res = sum_client.call(a=1, b=2)
print(res)