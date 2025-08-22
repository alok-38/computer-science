def computePay(hours, rate):
    try:
        hours = float(hours)
        rate = float(rate)
        if hours > 40:
            pay = (40 * rate) + ((hours - 40) * rate * 1.5)
        else:
            pay = hours * rate
        return pay
    except ValueError:
        print("Invalid input")

print(computePay(45, 10))

