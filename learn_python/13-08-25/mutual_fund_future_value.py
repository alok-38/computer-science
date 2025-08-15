# Starting value from your previous simulation
starting_value = 3903742.57  # after 3 years
monthly_withdrawal = 25000
future_months_10_years = 120  # 10 years

# Function to simulate fund value over time
def simulate_future_value(start_value, annual_return, months, monthly_withdrawal):
    monthly_return = (1 + annual_return) ** (1 / 12) - 1
    value = start_value
    for month in range(months):
        value *= (1 + monthly_return)
        value -= monthly_withdrawal
        if value <= 0:
            return 0  # fund depleted
    return value

# Run simulation for 10 years at 4%
value_after_10_years_4pct = simulate_future_value(starting_value, 0.04, future_months_10_years, monthly_withdrawal)

print(f"Fund value after 10 more years at 4% return: ₹{value_after_10_years_4pct:,.2f}")

