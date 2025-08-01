number = int(input("Enter a number less than nine digits: "))

while number > 0:
    right_digit = number % 10
    number = number // 10
    print(number)

