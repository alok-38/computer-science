# Step 1: Set some variables to initial values
total = 0
count = 0
maximum = float('-inf')
minimum = float('inf')

# Step 2: Sample data to work with
data = [10, 20, 5, 30, 15]

# Step 3: Loop through each item in the data
for item in data:
    # Do something to each entry: update total and count
    total += item
    count += 1

    # Look for something: update min and max
    if item > maximum:
        maxumum = item
    if item < minimum:
        minimum = item

# Step 4: Look at the variables (print results)
average = total / count if count != 0 else 0

print("Total:", total)
print("Count:", count)
print("Average:", average)
print("Max:", maximum)
print("Min:", minimum)
