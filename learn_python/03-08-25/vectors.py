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

