string_input = input("Enter a string: ").strip().lower()
vowel_count = 0

for char in string_input:
    if char in 'aeiou':
        vowel_count += 1

print(f"Number of vowels: {vowel_count}")

