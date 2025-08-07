# Accept a string from the user
some_string = input("Enter a string of your choice: ").strip()

# Convert to lower case
lower_case = some_string.lower()

# Set two pointers (as index values)
start = 0
end = len(lower_case) - 1

# Flag to check palindrome
is_palindrome = True

while start < end:
    if lower_case[start] != lower_case[end]:
        is_palindrome = False
        break
    start += 1
    end -= 1

# Output result
if is_palindrome:
    print("It's a palindrome!")
else:
    print("It's not a palindrome.")

