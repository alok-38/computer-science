x = int(input("Number_1: "))
y = int(input("Number_2: "))
z = int(input("Number_3: "))

# Create an empty list to store odd numbers
odd_numbers = []

# Check each number and add if it's odd
for num in (x, y, z):
    if num % 2 == 1:
        odd_numbers.append(num)
# Check if list is not empty
if odd_numbers:
    largest_odd = max(odd_numbers)
    print("Largest odd number:", largest_odd)
else:
    print("No odd numbers found.")

