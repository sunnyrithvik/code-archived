
n = int(input("enter a number "))


def facto(a):
    for i in range(1, a):
        a = a * i
    print("the factorial is", a)


facto(n)
