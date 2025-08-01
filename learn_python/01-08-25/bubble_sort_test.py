def bubble_sort_test(arr):
    n = len(arr)
    for i in range(n):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]

numbers = [5, 3, 8, 1, 2]
bubble_sort_test(numbers)
print(numbers) 
