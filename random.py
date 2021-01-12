from numpy.random import seed
from numpy.random import shuffle

seed(1)

sequence = [i for i in range(20)]
print(sequence)

shuffle(sequence)
print(sequence)