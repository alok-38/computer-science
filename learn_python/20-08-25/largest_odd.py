def largest_odd(x, y, z):
    odds = [n for n in (x, y, z) if n % 2 != 0]
    if odds:
        return max(odds)
    else:
        return "None of the numbers are odd."

x = int(input("Value 1: "))
y = int(input("Value 2: "))
z = int(input("Value 3: "))

result = largest_odd(x, y, z)
print(f"The largest odd is {result}")

