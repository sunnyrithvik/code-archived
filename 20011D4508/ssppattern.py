
# for i in range(1, 10,4):
#     print("*"*5, i)
# for j in range(1,4):
#     print("*", j)

j = 3
k = 3
''''
for i in range(1, 10,4):
    if i == 5:
        print("*" * 5)
        while j > 0:
            print("*")
            j = j - 1
        print("*" * 5)
    if i == 9:
        while k > 0:
            print("    *")
            k = k - 1
        print("*" * 5)
'''

for i in range(1, 10,4):
    if i == 5:
        print("*" * 5)
        while j > 0:
            print("*   *")
            j = j - 1
    