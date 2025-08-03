original = [1, 2, 3, 4]
v = [1, 2, 3]
# get the first or last item
print(f"First Item: {v[0]}")

# Add some number to the end
v.append(4)
print(v)

# remove 2
v.remove(2)
print(v)

print(f"Length of this vector: {len(v)}")

# Clear everything
v.clear()
print(f"After clearing: {v}")
# makes a new copy
v = original.copy()
print(v)

# Sum them
v = [1, 2, 3, 4]
sum_of_elements = sum(v)
print(f"All added: {sum_of_elements}")

# Average
average = sum_of_elements / len(v)
print(f"Average: {average}")

# Weighted average
weighted_average = average
print(f"In this case weighted average equals regular average: {weighted_average}")

# Lets add some weights
weights = [0.1, 0.2, 0.3, 0.4]

weighted_sum = 0
for value, weight in zip(v, weights):
    weighted_sum += value * weight

weighted_average = weighted_sum / sum(weights)
print(f"Weighted average: {weighted_average}")

# Square each element
squares = []

for each_value in v:
    squares.append(each_value * each_value)

print(f"After squaring: {squares}")

# Convert to another type (e.g., tuple, NumPy array)
my_tuple = tuple(v)
print(f"After converting to a tuple: {my_tuple}")

import numpy as np

my_list = [1, 2, 3, 4]
my_array = np.array(my_list)

import numpy as np
my_np_array = np.array(v)
print(f"After converting to np array: {my_np_array}")

