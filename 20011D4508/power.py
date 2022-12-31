
x = int(input("enter base "))
n = int(input("enter exponent "))


def pow(a, b):
    p = 1
    for i in range(1, b + 1):
        p = p * a

    print(a, " to the power of ", b, "is", p)


pow(x, n)
