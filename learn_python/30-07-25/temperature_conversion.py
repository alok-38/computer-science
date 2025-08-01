def temperature_conversion():
    def fahrenheit_to_celsius(temp_f):
        return (temp_f - 32) / 1.8

    def celsius_to_fahrenheit(temp_c):
        return (temp_c * 9 / 5) + 32

    choice = input("Convert from (C)elsius or (F)ahrenheit? ").strip().lower()

    try:
        temp_input = float(input("Enter the temperature: "))
        
        if choice == 'c':
            result = celsius_to_fahrenheit(temp_input)
            print(f"{temp_input}°C is {result:.2f}°F")
        elif choice == 'f':
            result = fahrenheit_to_celsius(temp_input)
            print(f"{temp_input}°F is {result:.2f}°C")
        else:
            print("Invalid choice. Please enter 'C' or 'F'.")
    except ValueError:
        print("Invalid temperature. Please enter a number.")

temperature_conversion()
