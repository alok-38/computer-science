questions = [
    {"question": "What is 2 + 2?", "answer": "4"},
    {"question": "What is the capital of France?", "answer": "Paris"},
]

# Create a function to run the quiz
def run_quiz(questions):
    score = 0
    for q in questions:
        user_answer = input(q["question"] + " ")
        if user_answer.strip().lower() == q["answer"].lower():
            print("Correct!\n")
            score += 1
        else:
            print("Wrong. The answer is:", q["answer"], "\n")
    print("You scored", score, "out of", len(questions))

# Call the function and pass the questions
run_quiz(questions)
