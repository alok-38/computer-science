from datetime import datetime

# Define the dates
year_end = datetime(year=2025, month=12, day=31)
today = datetime(year=2025, month=8, day=4)

# Difference in days
delta = year_end - today

print(f"The number of days left: {delta.days} days")

