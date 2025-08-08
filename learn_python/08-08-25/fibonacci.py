first = 1
second = 1
n = 10

print(first)
print(second)

for _ in range(n - 2):  # We already printed the first two
    next_fib = first + second
    print(next_fib)
    first, second = second, next_fib  # update the last two numbers

