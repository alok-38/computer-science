import math as root
def checkForPrime(number):
    if number % 2 == 0:
        return False
    else:
        for number in range(1, root.sqrt(number)):
            if number % 2 == 0:
                return False
            else:
                return False

print(checkForPrime(2))
print(checkForPrime(3))
