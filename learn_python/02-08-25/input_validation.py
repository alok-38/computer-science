try:
    N = int(input("N: "))
    if N < 0:
        print("Please enter a non-negative integer")
    else:
        for _ in range(N):
            print("hello world")
except ValueError:
    print("Invalid input. Please enter an integer.")
