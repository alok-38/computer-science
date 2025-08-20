def more_variables():
    try:
        name = input("Name: ")
        age = int(input("Age: "))
        height = int(input("Height (in inches): "))
        weight = int(input("Weight (in pounds): "))
        eyes = input("Eye color: ")
        teeth = input("Teeth color: ")
        hair = input("Hair color: ")

        print()
        print(f"Let's talk about {name}.")
        print(f"They're {height} inches tall.")
        print(f"They weigh {weight} pounds.")
        print("Actually, that's not too heavy.")
        print(f"They've got {eyes} eyes and {hair} hair.")
        print(f"Their teeth are usually {teeth}, depending on the coffee.")

        total = age + height + weight
        print()
        print(f"If I add {age}, {height}, and {weight}, I get {total}.")

    except ValueError:
        print("Invalid input. Please enter numeric values for age, height, and weight.")

more_variables()

