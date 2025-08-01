for even_numbers in range(1, 100):
    if even_numbers % 2 == 0:
        print(even_numbers)

print("Now using while loop")

# reset the variable
even_numbers = 0
while even_numbers <= 100:
    if even_numbers % 2 == 0:
        print(even_numbers)
    even_numbers += 1
