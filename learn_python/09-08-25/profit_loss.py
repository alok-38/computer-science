try:
    cost_price = float(input("Enter the cost price: "))
    selling_price = float(input("Enter the selling price: "))
    profit = selling_price - cost_price

    if profit < 0:
        print(f"Loss of ${abs(round(profit, 2))}")
    elif profit > 0:
        print(f"Profit of ${round(profit, 2)}")
    else:
        print("No profit, no loss.")
except ValueError as e:
    print(f"Invalid input: {e}")

