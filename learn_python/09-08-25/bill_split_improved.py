try:
    total_friends = int(input("How many friends are splitting the bill? "))
    if total_friends <= 0:
        raise ValueError("Number of friends must be greater than zero.")
    
    bill = float(input("Enter the bill amount: "))
    tax_amount = 0.20 * bill
    total_with_tax = bill + tax_amount
    amount_per_person = round(total_with_tax / total_friends, 2)

    print(f"Each person should pay: ${amount_per_person}")
except ValueError as e:
    print(f"Invalid input: {e}")

