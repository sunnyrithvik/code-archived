def option():
    opt = input("Enter an option\n")
    return opt


def add(sum):
    n = float(input("Enter another number\n"))
    sum += n
    return sum


def sub(sum):
    n = float(input("enter another num\n"))
    sum -= n
    return sum


def mul(sum):
    n = float(input("Enter another number\n"))
    sum *= n
    return sum


def div(sum):
    n = float(input("Enter another number\n"))
    sum /= n
    return sum


print("a.addition")
print("b.subtraction")
print("c.multiplication")
print("d.division")
print("q.quit")

sum = float(input("Enter a number\n"))

print(type(sum))

while True:
    ip = option()
    if ip != 'q':
        if ip == 'a':
            print("Addition")
            sum = add(sum)
            print(sum)
        elif ip == 'b':
            print("subtract")
            sum = sub(sum)
            print(sum)
        elif ip == 'c':
            print("multiply")
            sum = mul(sum)
            print(sum)
        elif ip == 'd':
            print("divide")
            sum = div(sum)
            print(sum)
        else:
            print("Invalid")
    else:
        break
