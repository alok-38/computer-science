try:
    x = int(input("Enter a number: "))
    y = 10 / x
except ValueError:
    print("Please enter a valid number.")
except ZeroDivisionError:
    print("You can't divide by zero.")
