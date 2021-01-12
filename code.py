from random import seed
from random import randint

seed(randint(1,10))
x = int(input("How many random numbers?  "))
y = int(input("Enter range :  "))
for _ in range(x):
	value = randint(0, y)
	print(value)