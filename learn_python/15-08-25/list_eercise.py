# Create a list of numbers from 1 to 10
list_of_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# using range
using_range = list(range(1, 11))
print(using_range)

# Using List Comprehension
list_comprehension = [x for x in range(1, 11)]
print(list_comprehension)

print_evens = [x for x in range(1, 11) if x % 2 == 0]
print(print_evens)

# Replace the last element in a list with 'Python'
langs = ['C', 'C++', 'Java', 'Rust']
langs[len(langs) - 1] = "Python"
print(langs)

# Alternative (more Pythonic):
langs[-1] = "C++"
print(langs)

tools = ['git', 'docker']
if 'kubernetes' not in tools:
    tools.append('kubernetes')
print(tools)

# Remove duplicates from a list
data = [1, 2, 2, 3, 4, 4, 5]
unique_list = list(set(data))
print(unique_list)

# Keep Original Order (Interview-Friendly Version)
data = [1, 2, 2, 3, 4, 4, 5]
unique_list = []
for item in data:
    if item not in unique_list:
        unique_list.append(item)
print(unique_list)

# Reverse a list without using .reverse() or slicing [::-1]
nums = [10, 20, 30, 40]
empty_list = []
for items in range(nums - 1, -1, -1):
    empty_list.append(items)
print(empty_list)
