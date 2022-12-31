
class Employee:
    raise_amount = 1.04

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'

    def fullname(self):
        return f'{self.first} {self.last}'

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)


class Developer(Employee):
    raise_amt = 1.10


dev_1 = Employee('corey', 'schafer', 50000)
dev_2 = Employee('Test', 'user', 60000)

print(dev_1.email)
print(dev_2.email)

dev1 = Developer('corey', 'schafer', 50000)
dev2 = Developer('Test', 'user', 60000)

print(dev1.email)
print(dev2.email)

# print(help(Developer))

print(dev1.pay)
dev1.apply_raise()
print(dev1.pay)




