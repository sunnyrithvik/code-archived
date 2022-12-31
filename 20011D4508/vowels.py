
num = input("enter a statement")

alpha = ["a", "e", "i", "o", "u"]
for i in alpha:
    print("no of times", i.strip(), "is ", num.count(i))
