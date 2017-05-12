names = input().split("-")
numnames = len(names)
shortvariation = ""

for i in range(0, numnames):
    shortvariation += names[i][0].upper()

print(shortvariation)
