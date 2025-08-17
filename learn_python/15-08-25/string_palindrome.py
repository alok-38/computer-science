text = input("Enter a text: ")
# compare the string to reverse
if text == text[::-1]:
    print("It is a palindrome")
else:
    print("It is not a palindrome")
