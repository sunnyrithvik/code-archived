'''

# DATA STRUCTURES

# looping over lists
[] - list, () - tuple
enumerate gives index and words

# add or remove items
num.
.pop
.remove
del
.clear
.count

# sorting lists
sorts the original num
num.sort()
num.sort(reverse=True)
creates new num and sorts it
sorted(num)
sorted(num, reverse= True)
sort() takes no positional arguments

# lambda fn
it is a one line fn
lambda parameters:expression
i.e. arg:return

# map function
items=[(12,13),(15,18),(19,17)]
x=map(lambda item:item[1], items)
for item in x:
    print(item)
or
price=list(map(lambda item:item[1], items))
print(price)

# filter fn
to filter a specific prices >= 10 or some value
price=list(filter(lambda item:item[1]>=10, items))
print(price)

# list comprehension
price=list(map(lambda item:item[1], items))
price=[item[1] for item in items]

price=list(filter(lambda item:item[1]>=10, items))
price=[item for item in items if item[1]>=10]

# zip function
print(list(zip("abc",list 1, list 2)))

# stacks
# queues
in queue import deque from collections
.popleft() to remove 1st element

# tuples
() or without brackets is a tuple
tuple() fn coverts list into tuple

# arrays
use array only if list is too large
from array import  array
num=array("i",[1,2,3])

# sets
remove duplicates
{} - sets
set(num)
powerful maths supported by them
fnum={1,2,3,4}
snum={1,5}
fnum | snum -> union
fnum & snum -> intersection
fnum - snum -> difference
fnum ^ snum -> symmetric difference
cannot be accessed by index like lists
to find a num present in set

# Dictionaries
maps key-value pair
point = {"x":1, "y":2}
point = dict(x=1,y=2)
point["x"] = 10
point["z"] = 20
if "a" in point:
    print(point["a"])
print(point.get("a",0))
del point["x"]
print(point)
for x in point:
    print(x)
or
for key in point:
    print(key, point[key])
or
for key,value in point.items():
    print(key, value)

# dictionary comprehension
values = [x*2 for x in range(5)]
can be used in sets and dict
values = {x*2 for x in range(5)} - set
set and dict uses curley braces -{}
for sets
{1,2,3,4}
{1:"a", 2:"b", 3:"c"}
for dict
values = {x: x * 2 for x in range(5)}
tuples cannot be used

# Generator expression
is used for large data handling
from sys import  getsizeof
values = (x*2 for x in range(1000))
print("generator:", getsizeof(values))
print(len(values)) -> error no len for generator
values = [x*2 for x in range(1000)]
print("list:", getsizeof(values))

# Unpacking operator
to print or takeout individual items
num = [1,2,3]
print(*num)
values = list(range(5))
values = [*range(5),*"Hello"]
print(values)
first ={"x":1}
second = {"x":10, "y":2}
combined = {**first , **second,"z":1}
print(combined)


# Exceptions
file =open(app.py)
finally:
    file.close()

with open(app.py) as file:
    print()
    file.__enter__()

raise ValueError("err")

try:
    prog
except ValueError as error:
    print(error)

Do not use exceptions for large files

# Class
blueprint for creating new objects
object is an instance of a class

type(point)
isinstance(point, Point)

constructor
def __init__(self,x):
    self.x=x

class vs instance attributes
class attributes are shared across all instances of class
instance attributes are specified to objects

class vs instance methods
class Point:
    @classmethod
    def zero(cls):
        return cls(0,0)        -->  point(0,0)

magic methods
'''


