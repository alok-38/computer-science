# Step 1: Ask for input
name = input("What is your name? ").strip()

# Step 2: Say Hello
print(f"Hello, {name}!")

# Step 3: Ask for age
age = input("How old are you? ").strip()

# Step 4: Convert age to integer and calculate next age
next_age = int(age) + 1


print(f"You will turn {next_age} this september! ")
