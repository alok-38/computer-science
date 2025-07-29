# Get user input for hours and rate
hours = input("Enter Hours: ").strip()
hours = float(hours)

rate = input("Enter Rate: ").strip()
rate = float(rate)

# Calculate pay
if hours <= 40:
    pay = hours * rate
else:
    regular_pay = 40 * rate
    overtime_hours = hours - 40
    overtime_pay = overtime_hours * (rate * 1.5)
    pay = regular_pay + overtime_pay

# Print total pay
print("Pay:", pay)

