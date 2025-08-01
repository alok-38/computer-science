try:
    num = int(input("Enter a number: "))
    result = num * 2
    with open('output.txt', 'w') as f:
        f.write(f"Double of {num} is {result}\n")
    print("Result saved to output.txt.")
except ValueError:
    print("That's not a valid number.")
