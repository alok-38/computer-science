try:
    value_1 = float(input("Value 1: "))
    value_2 = float(input("Value 2: "))
    operator = input("+ / - / * / / : ")

    match operator:
        case '+':
            result = value_1 + value_2
            print(f"{value_1} + {value_2} = {result}")
        case '-':
            result = value_1 - value_2
            print(f"{value_1} - {value_2} = {result}")
        case '*':
            result = value_1 * value_2
            print(f"{value_1} * {value_2} = {result}")
        case '/':
            if value_2 != 0:
                result = value_1 / value_2
                print(f"{value_1} / {value_2} = {result}")
            else:
                print("Error: Division by zero!")
        case _:
            print("Invalid operator! Use +, -, *, or /")
except ValueError:
    print("Only numbers are allowed!")

