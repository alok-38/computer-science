import string

def clean_sentence(sentence):
    sentence = sentence.lower()
    sentence = sentence.join(text for text in sentence if text in string.ascii_lowercase)
    return sentence

sentence = input("Enter a sentence: ")
cleaned_sentence = clean_sentence(sentence)

if sentence == sentence[::-1]:
    print("Palindrome")
else:
    print("Not a palimdrome")
