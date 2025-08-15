# Inputs
initial_investment = 3900000  # ₹39 lakhs
monthly_withdrawal = 25000  # SWP amount
annual_return = 0.08  # 8% annual return
months_elapsed = 36  # 3 years

# Monthly return
monthly_return = (1 + annual_return) ** (1 / 12) - 1

# Simulate value over 36 months with monthly withdrawals and returns
value = initial_investment
for month in range(months_elapsed):
    value *= (1 + monthly_return)  # grow the investment
    value -= monthly_withdrawal  # withdraw ₹25,000

print(f"Estimated current value after 3 years: ₹{value:,.2f}")

