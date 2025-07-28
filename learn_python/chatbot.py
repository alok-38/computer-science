import random

# List of jokes
jokes = [
    "Why don't scientists trust atoms? Because they make up everything!",
    "Why did the math book look sad? Because it had too many problems.",
    "Why do we tell actors to 'break a leg?' Because every play has a cast!",
    "I'm reading a book about anti-gravity. It's impossible to put down!"
]

# Simple Chatbot Program

# Step 1: Greet the user
print("Hi there! I'm ChatBot 😊")

# Step 2: Ask for user's name
name = input("What is your name? ").strip()
print(f"Nice to meet you, {name}!")

# Step 3: Ask for user's age
age = input("How old are you? ").strip()

# Validate and respond
try:
    age = int(age)
    next_age = age + 1
    print(f"Wow, {name}, you'll turn {next_age} this september! 🎉")
except ValueError:
    print("Oops! That doesn't look like a valid number for your age.")

# where are they from
place = input(f"Where are you from {name}? ").strip()
print("Hmmm....Nice!")

# Pick a random joke
joke = random.choice(jokes)
print(f"Here's a joke for you: {joke}")

# Step 5: Farewell
print("It was nice chatting with you. Have a great day! 👋")
