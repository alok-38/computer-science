text = input("Enter a text: ")
is_palindrome = True

for index in range(len(text) // 2):
    if text[index] != text[-(index + 1)]:
        is_palindrome = False
        break

if is_palindrome:
    print("It is a palindrome")
else:
    print("It is not a palindrome")
