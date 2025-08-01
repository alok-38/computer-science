def celsius_to_fahrenheit():
    try:
        celsius = float(input("Enter a temperature in Celsius: "))
        fahrenheit = (celsius * 9 / 5) + 32
        print(f"{celsius:.2f}°C is equal to {fahrenheit:.2f}°F")
    except ValueError:
        print("Invalid input! Please enter a numeric temperature.")

celsius_to_fahrenheit()

