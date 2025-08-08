def check_types(arr):
    for i, element in enumerate(arr):
        print(f"Element {i}: {element} → {type(element).__name__}")

my_array = [1, "hello", 3.14, True, None, [1, 2], {"key": "value"}]
check_types(my_array)
