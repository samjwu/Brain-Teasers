numlines = int(input())
numbers = []

for i in range(0, numlines):
    numbers.append(int(input()))

for i in range(0, numlines):
    number = numbers[i]
    if number % 2 == 0:
        print(number, 'is even')
    else:
        print(number, 'is odd')
