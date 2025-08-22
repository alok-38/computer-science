try:
    hours = int(input("Enter Hours: "))
    rate = float(input("Enter Rate: "))
    if hours <= 0 or rate <= 0:
        print("They cannot be zero or non-negative.")
    else:
        pay = hours * rate
        print(f"Pay: {pay}")
except ValueError:
    print("Invalid Input")

