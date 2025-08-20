def carpool_calculator():
    try:
        cars = int(input("Enter the number of cars available: "))
        space_in_a_car = int(input("Enter the number of seats per car: "))
        drivers = int(input("Enter the number of available drivers: "))
        passengers = int(input("Enter the number of passengers: "))

        cars_driven = min(drivers, cars)
        cars_not_driven = cars - cars_driven
        carpool_capacity = cars_driven * space_in_a_car

        if cars_driven == 0:
            average_passengers_per_car = 0
        else:
            average_passengers_per_car = passengers / cars_driven

        print("\n--- Carpool Summary ---")
        print(f"Cars available: {cars}")
        print(f"Drivers available: {drivers}")
        print(f"Cars driven today: {cars_driven}")
        print(f"Empty cars today: {cars_not_driven}")
        print(f"Total carpool capacity: {carpool_capacity} people")
        print(f"Passengers needing carpool: {passengers}")
        print(f"Average passengers per car: {average_passengers_per_car:.2f}")

    except ValueError:
        print("Please enter valid numbers only.")

# Call the function
carpool_calculator()
