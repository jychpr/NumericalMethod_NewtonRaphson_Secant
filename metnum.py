import math
import time
start = time.time() # untuk menghitung waktu

print("-"*25 + "NEWTON RAPHSON METHOD" + "-"*25) # kode untuk metode newton raphson dimulai

x0 = 10
raem = 100.0
i = 0

while raem>=1 :
    print("-" * 35)
    print("Iterasi i=",i)
    i = i + 1
    print("x0      :", x0)
    f = (1.5 ** x0) - 5
    fd1 = (1.5 ** x0) * 0.4054651081
    x1 = (x0) - (f/fd1)
    print("x1      :", x1)
    rae = ((x1-x0)/x1) * 100
    if rae<0:
        raem = rae * (-1)
    else:
        raem = rae
    print("rae     :", raem)
    x0 = x1

print(" ")
print(" ")

print("-"*25 + "SECANT METHOD" + "-"*25) # kode untuk metode secant dimulai

X0 = 10
X1 = 8
raem = 100.0
i = 0

while raem>=1:
    print("-" * 35)
    print("Iterasi i=",i)
    i = i + 1
    print("x0      :", X0)
    print("x1      :", X1)
    fx0 = (1.5 ** X0) - 5
    fx1 = (1.5 ** X1) - 5
    X2 = X1 - ((fx1)*(X1-X0)/(fx1-fx0))
    print("x2      :", X2)
    rae = ((X2-X1)/X2)*100
    if rae<0:
        raem = rae * (-1)
    else:
        raem = rae
    print("rae     :", raem)
    X0 = X1
    X1 = X2

end = time.time()
print(" ")
print("Runtime :", end - start)