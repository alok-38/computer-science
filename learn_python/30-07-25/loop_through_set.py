print("Before")
largest = None
smallest = None
for thing in [9, 41, 12, 3, 74, 15]:
    if largest is None or thing > largest:
        largest = thing
    if smallest is None or thing < smallest:
        smallest = thing
print("Largest number is:", largest)
print("Smallest number is:", smallest)
