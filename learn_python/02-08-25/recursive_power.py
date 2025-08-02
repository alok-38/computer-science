def power(base, exp):
    if exp == 0:
        return 1
    else:
        return base * power(base, exp - 1)

print(power(2, 3))  # 8
print(power(2, 2))  # 4
print(power(4, 2))  # 16
