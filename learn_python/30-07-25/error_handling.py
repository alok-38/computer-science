try:
    age = int(input("Please enter your age: "))
    print(f"You are {age} years old")
except ValueError:
    print("Invalid age")

