def celsius_to_fahrenheit():
    try:
        celsius = float(input("Celsius: "))
        fahrenheit = (celsius * 9 / 5) + 32
        return fahrenheit
    except ValueError:
        print("Invalid Input")

print(celsius_to_fahrenheit())

