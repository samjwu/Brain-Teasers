numlines = int(input())
result = 0

for i in range(0,numlines):
    nextinput = input()
    nextnum = int(nextinput[:-1]) ** int(nextinput[-1])
    result += nextnum

print(result)
