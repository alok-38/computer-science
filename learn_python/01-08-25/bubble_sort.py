def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

# Try it out
numbers = [5, 3, 8, 1, 2]
print(numbers)
bubble_sort(numbers)
print(numbers)
