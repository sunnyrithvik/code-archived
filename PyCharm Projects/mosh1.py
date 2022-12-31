sr = '''

# Python is case sensitive
# always use meaningful words
# always use lower case letter for variable name
# always use _(underscore) for seperating words
# space between two words is not allowed in python

# print name
print('rithvik'*7)

# variables
price = 10
price = 20.5
name = 'rithvik'
is_name = True
print(price)

# Getting input
rate = input('enter some value ')
print('Hi' + rate)
print('This '+rate)

# Type conversion
birth = input('birthday ? ')
print(type(birth))
age = 2021 - int(birth)
print(type(age))
print(age)

# Strings
course = "Python's course"
print(course)
core = 'Python "3"'
print(core)
print(course[7])
print(course[-1])
print(course[0:4])
print(course[1:])
print(course[:6])
new_course = course[:]
print(new_course)

# Formatted strings
first = 'ssr'
last = 'sunny'
msg = first + '['+ last + '] is good'
print(msg)
sms = f'{first} [{last}] is good '
print(sms)

# String methods
course = 'python for user '
print(len(course))
print(course.capitalize())
print(course.upper())
print(course.lower())
print(course.find('r'))
print(course.find('P'))
print(course.find('user'))
print(course.replace('user','new user'))
print(course.replace('User','new user'))
print(course.replace('p','T'))
print(course.replace('P','T'))
print('use' in course)
print(course.title())

# Arithmetic operations

print(10 / 3)
print(11 // 3)
print(10 % 3)
print (10 ** 3)
x = 10
x = x + 3
x+= 3
print(x)

# Operator precedence

# Math functions
x=2.7
round(x)
abs(x)
import math
math.cos(x)
math.floor(x)
math.ceil(x)
# python 3 math module

# If statements

is_hot = True
is_cold = False

if is_hot:
    print("its hot")
elif is_cold:
    print("its cold")
else:
    print("lovely")

print("Enjoy")

# Logical operators
and, or, not ;

# Comparison operators
>, <, >= ,<= ,== ;

# While loops
i = 1
while i <= 5:
    print(i)
    i = i + 1

# break, while can have else part

# For loops
for item in 'python':
    print(item)
for item in ['mr','ms','mrs']:
    print(item)
for item in range(5,10,2):
    print(item)

# Nested loops

# Lists
names = ['sun','son','dad']
print(names[2])
print(names[1:])
print(names[1:3])
names[0]='syn'
print(names[0])
list("hello world")
num=list(range(10))
num[::2]
we can modify items in the lists
list unpacking

# 2D Lists

# List Methods
num = [5,3,7,2,9,7]
num.append(1)
num.insert(1,0)
num.remove(3)
num.pop()
print(num)
print(num.index(7))
print(7 in num)
print(num.count(7))
num.sort()
print(num)
num.reverse
print(num)
num2 = num.copy
print(num2)

num.clear()

# Tuples()
# we cannot change tuples

# Unpacking
coord = (1,2,3)
x,y,z = coord
print(x,y,z)
i,j,*k = coord


# Dictionaries
customer = {
     "name":"sunny",
     "age":"25",
     "is_verified": True
 }
customer["name"]="sony"
print(customer["name"])
print(customer.get("name"))
print(customer.get("birthday"))
print(customer.get("birthday", "sep 6 1995"))
#.get(num, "!")
#.split(' ')


# Functions
# always define fn first then call it
def greet_user():
    print('Hi')
    print('Welcome')


print("start")
greet_user()
print("finish")


# Parameters
# diff b/w parameters and arguments
def greet_name(name):
    print(f'Hi {name}')
    print('Welcome')


print("start")
greet_name("sony")
greet_name("sunny")
print("finish")

# Keyword arguments
# diff b/w positional and keyword arguments
# keyword must be used after positional arguments
# greet_fullname(last="sunny", first="sony")
# greet_fullname("sunny", first="sony")

# Return statement(for function)
# by default python returns none


def square(num):
    return num*num


result = square(3)
print(result)

# creating a reusable fn

# Exceptions
# try except (to handle errors)
try:
    age = int(input('Age: '))
    print(age)
except ValueError:
    print('invalid value')

# Comments
# to explain whys and hows not whats

# classes
# capitalize first letter of every word and no spaces in the name
# point


class Point:
    def move(self):
        print("move")

    def draw(self):
        print("draw")


point1 = Point()
point1.x = 10
print(point1.x)
point1.draw()


# Constructors
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def move(self):
        print("move")

    def draw(self):
        print("draw")


point1 = Point(10,20)
point1.x = 12
print(point1.x)


# Inheritance
class Mammal:
    def walk(self):
        print("walk")

class Dog(Mammal):
    def bark(self):
        print("bark")

class Cat(Mammal):
    pass

dog1 = Dog()
dog1.walk()


Modules
breakup into multiple files
can be accessed through import
import conv
from conv import ktol
ktol(100)

Packages
__init__.py
dir()

random
random.choice
randint

Files and Directories
pathlib
absolute and relative path
path.
path.glob('*.py')
for file in path

Pypi and pip
install packages from pypi

project
process spreadsheets

\ escape character
\\ double
\n for new line

falsy in boolean
""
0
None

ternary operator

*args
**args

vs shortcuts
begin of line fn + home
end of line fn + end
begin of file ctrl + fn + home
end of file ctrl + fn + home
to move whole line either up or down shift + alt + up / down
to comment select ctrl + /
to select content shift + fn + up/down

lists are mutable addr doesn't change
chaining comparision operator
python is dynamically typed

'''
