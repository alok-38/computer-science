try:
    weight = float(input("Enter your weight in kilograms: "))
    height = float(input("Enter your height in meters: "))

    if weight <= 0 or height <= 0:
        raise ValueError("Weight and height must be positive numbers.")

    bmi = weight / height ** 2
    print(f"Your BMI is: {round(bmi, 2)}")

    # After calculating bmi
    if bmi < 18.5:
      category = "Underweight"
    elif 18.5 <= bmi < 24.9:
      category = "Normal weight"
    elif 25 <= bmi < 29.9:
      category = "Overweight"
    else:
      category = "Obese"

    print(f"Your BMI is {round(bmi, 2)} ({category})")

except ValueError as e:
    print(f"Invalid input: {e}")

