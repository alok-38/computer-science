price = 19.99
# Use it in a calculation
tax_rate = 0.07
total_price = price + (price * tax_rate)
print(total_price)
# Change the value later
price = 24.99
print(price)
# Use it in a sentence
print(f"The price of the item is ${price}")
# Ask the user to enter the price
user_decided_price = float(input("What price have you decided: "))
# Define the tax rate
new_tax_rate = 0.06

# Calculate total price including tax
total_price = price + (price * tax_rate)

print(f"The total price including tax is: ${total_price:.2f}")
