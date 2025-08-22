try:
    hours = float(input("Hours: "))
    rate = float(input("Rate: "))
except ValueError:
    print("Error: Please enter numeric input.")
    exit()

if hours > 40:
    regular_pay = 40 * rate
    overtime_pay = (hours - 40) * rate * 1.5
    pay = regular_pay + overtime_pay
else:
    pay = hours * rate

print(f"Pay: {pay}")

