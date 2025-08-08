number = 0
if number <= 1:
    print(f"{number} is not prime")
    print("Table of primes")
else:
    for each_number in range(11):
        if number % each_number == 0:
            break;
        else:
            print(number)

