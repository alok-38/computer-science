def luhn_check(number: str) -> bool:
    # Step 1: Convert the number into a list of integers (reversed)
    digits = [int(d) for d in number][::-1]

    # Step 2: Double every second digit (those at odd indexes in reversed list)
    for i in range(1, len(digits), 2):
        doubled = digits[i] * 2
        if doubled > 9:
            doubled -= 9
        digits[i] = doubled

    # Step 3: Sum all digits
    total = sum(digits)

    # Step 4: If total modulo 10 is 0, it's valid
    return total % 10 == 0


print(luhn_check("79927398713"))
print(luhn_check("1234567812345670"))
print(luhn_check("1234567812345678"))
