def generate_factorial_table(n):
    factorials = []
    result = 1

    for i in range(n + 1):
        if i == 0:
            factorials.append(1)
        else:
            result *= i
            factorials.append(result)

    return factorials

# Test
print(generate_factorial_table(5))

