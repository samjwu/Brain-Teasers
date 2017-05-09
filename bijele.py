import sys

chessset = [1, 1, 2, 2, 2, 8]
inputset = input().split()

for i in range(6):
    sys.stdout.write(str(chessset[i] - int(inputset[i])))
    if i != 5:
        sys.stdout.write(' ')
    else:
        sys.stdout.write('\n')
