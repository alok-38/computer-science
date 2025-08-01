def factorial(number):
    if number == 0 or number == 1:
        return 1
    else:
        return number * factorial(number - 1)

print("TABLE OF FACTORIALS")

for number in range(1, 11):
     print(f"{number}\t{factorial(number)}")

