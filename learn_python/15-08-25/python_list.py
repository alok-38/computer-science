# Create a list
fruits = ['apple', 'banana', 'cherry']

# Access first element
print(fruits[0])

# Modiy
fruits[1] = 100
print(fruits)

# Add to end (append)
fruits.append("orange")
print(fruits)

# Insert at index
fruits.insert(2, "grapes")
print(fruits)

# Removes first matching value
fruits.remove(100)
print(fruits)

# Removes element at index
fruits.pop(0)

print(len(fruits))

# Shallow copy
new_list = fruits.copy()
print(new_list)

# Looping
for item in fruits:
    print(item)

# List Comprehension
squares = [x**2 for x in range(10)]
print(squares)

# List comprehension with condition
evens = [x for x in range(10) if x % 2 == 0]
print(evens)
