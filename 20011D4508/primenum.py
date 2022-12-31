'''
val = int(input("enter a number "))

for i in range(2, val + 1):
    p = 0
    for j in range(2, i):
        if i % j == 0:
            print( i, j)
            p = p + 1
    if p == 0:
        print(i)
'''

val = int(input("enter a number "))

for i in range(2, val + 1):
    for j in range(2, i):
        if i % j == 0:
            # print( i, j)
            break
    else:
        print(i)
