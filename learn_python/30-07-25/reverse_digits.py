try:
    number = int(input("Enter your number: "))
except ValueError:
    print("Invalid number")
    exit()

sign = -1 if number < 0 else 1  # Save the sign
number = abs(number)           # Work with the positive part

reversed_number = 0

while number > 0:
    digit = number % 10
    reversed_number = reversed_number * 10 + digit
    number = number // 10

# Reapply the sign
reversed_number *= sign

print(reversed_number)

