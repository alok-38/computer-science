try:
    positive_int = int(input("Integer: "))

    if positive_int % 2 != 0:
        print("Weird")
    elif 2 <= positive_int <= 5:
        print("Not Weird")
    elif 6 <= positive_int <= 20:
        print("Weird")
    elif positive_int > 20:
        print("Not Weird")

except ValueError:
    print("Invalid input")

