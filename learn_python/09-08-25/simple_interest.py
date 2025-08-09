try:
    principal = float(input("Principal: "))
    rate_of_interest = float(input("Interest rate: "))
    period = int(input("Time period (years): "))
    SI = (principal * rate_of_interest * period) / 100
    print(f"Simple Interest: {SI}")
except ValueError:
    print("Please enter valid numeric input!")

