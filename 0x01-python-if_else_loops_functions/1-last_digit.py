#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number > 5:
    print('Last digit of', number, 'is', { }, 'and is greater than 5')
elif number < 6:
    print('Last digit of', number, 'is', { }, 'and is less than 6 and not 0')
else:
    print('Last digit of', number, 'is', { }, 'and is 0')
