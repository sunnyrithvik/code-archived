num = "ram is studying in is ram jntuh"

alpha = num.split()
print(alpha)
b = []
for i in alpha:
    if i not in b:
        b.append(i)
b.sort()
print(b)