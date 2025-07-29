def square(x):
    return x * x

def testEven(x):
    if square(x) % 2 == 0:
        return "Its even!"
    else:
        return "Its odd"

print(f"{testEven(4)}")
print(f"{testEven(5)}")
