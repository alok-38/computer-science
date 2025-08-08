# Ask the user for their weight (kg) and height (m)
weight = float(input("Weight (kg): "))
height = float(input("Height (m): "))

# Calculate BMI
bmi = weight / (height ** 2)
print(f"BMI = {bmi:.2f}")

