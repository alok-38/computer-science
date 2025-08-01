try:
    number = int(input("Enter a number: "))
    if number % 2 == 0:
        print("It's even")
    else:
        print("It's odd")
except ValueError:
    print("Invalid input. Please enter an integer.")

