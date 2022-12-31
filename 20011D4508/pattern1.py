
for i in range(1, 10):
    print("*"*i, i)
for i in range(10, 1):
    print("*"*i)

j = 10
while j > 0:
    print("*"*j, j)
    j = j - 1

for i in range(1, 10):
    print(" "*i, "*"*(~i), i)
