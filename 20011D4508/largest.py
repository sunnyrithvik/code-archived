
x = int(input("enter 1st num "))
y = int(input("enter 2nd num "))
z = int(input("enter 3rd num "))

if x > y:
    if x > z:
        print(x, " is large")
        if y > z:
            print(z, " is small")
    else:
        print(z, " is large")
        print(y, " is small")
elif y > x:
    if y > z:
        print(y, " is large")
        if x > z:
            print(z, " is small")
    else:
        print(z, " is large")
        print(x, " is small")