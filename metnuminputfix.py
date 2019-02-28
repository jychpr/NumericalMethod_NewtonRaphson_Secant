import math

print("-"*25 + "NEWTON RAPHSON METHOD" + "-"*25)

print("Masukkan nilai x0 : ", end=' ')
x0 = input()
raem = 100.0
i = 0

while raem>=1 :
    print("-" * 35)
    print("Iterasi i=",i)
    i = i + 1
    print("x0      :", x0)
    f = (1.5 ** float(x0)) - 5
    print("f(x)    :", f)
    fd1 = (1.5 ** float(x0)) * 0.4054651081
    print("f'(x)   :", fd1)
    x1 = float(x0) - (f/fd1)
    print("x1      :", x1)
    rae = ((x1-float(x0))/x1) * 100
    if rae<0:
        raem = rae * (-1)
    else:
        raem = rae
    print("rae     :", raem)
    x0 = x1

print(" ")
print(" ")

print("-"*25 + "SECANT METHOD" + "-"*25)

print("Masukkan nilai x0 : ", end=' ')
X0 = input()
print("Masukkan nilai x1 : ", end=' ')
X1 = input()
raem = 100.0
i = 0

while raem>=1:
    print("-" * 35)
    print("Iterasi i=",i)
    i = i + 1
    print("x0      :", X0)
    print("x1      :", X1)
    fx0 = (1.5 ** float(X0)) - 5
    print("f(x)    :", fx0)
    fx1 = (1.5 ** float(X1)) - 5
    print("f'(x)   :", fx1)
    X2 = float(X1) - ((fx1)*(float(X1)-float(X0))/(fx1-fx0))
    print("x2      :", X2)
    rae = ((X2-float(X1))/X2)*100
    if rae<0:
        raem = rae * (-1)
    else:
        raem = rae
    print("rae     :", raem)
    X0 = X1
    X1 = X2