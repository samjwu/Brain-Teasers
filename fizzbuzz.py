inline = input().split()
fizz = int(inline[0])
buzz = int(inline[1])
lines = int(inline[2])

for i in range(1,lines+1):
    if i % fizz == 0 and i % buzz == 0:
        print("FizzBuzz")
    elif i % fizz == 0:
        print("Fizz")
    elif i % buzz == 0:
        print("Buzz")
    else:
        print(i)
