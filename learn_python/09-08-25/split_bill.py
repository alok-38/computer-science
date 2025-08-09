# Get an integer input for the total number of friends
total_friends = int(input("How many of you? "))
bill = int(input("Bill amount: "))
tax_amount = (20 / 100) * bill
bill += tax_amount
print(bill / total_friends)
