def absolute_value(number):
    try:
        number = int(number)
        return -number if number < 0 else number
    except ValueError:
        return "Invalid input"


# Manual Test Cases
user_input = input("Enter a number: ")
result = absolute_value(user_input)
print(f"The absolute value of {user_input} = {result}")

