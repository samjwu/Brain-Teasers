result = 0
numtemps = int(input())
temps = input().split()

for i in range(0, numtemps):
    if int(temps[i]) < 0:
        result += 1

print(result)