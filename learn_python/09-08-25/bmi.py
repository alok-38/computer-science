try:
    weight = float(input("Weight in kilograms: "))
    height = float(input("Height in meteres: "))
    bmi = weight / height ** 2
    print(f"{abs(round(bmi, 2))}")
except ValueError as e:
    print(f"Invalid input: {e}")
