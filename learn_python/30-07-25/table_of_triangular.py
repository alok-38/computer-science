n = 1

print("TABLE OF TRIANGULAR NUMBERS")
print(f"{'n'}\tSum from 1 to n")
print("-----------------------")

for number in range(n, 11):
    triangular_number = number * (number + 1) // 2  # using integer division
    print(f"{number}\t{triangular_number}")

