some_variable = 0
data = ["Alok", 0, 3.14]
for thing in data:
    if isinstance(thing, (int, float)):
        some_variable += 1

print(some_variable)
    
