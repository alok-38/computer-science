def computeGrade(score):
    try:
        score = float(score)
        if score < 0.0 or score > 1.0:
            return "Score must be between 0.0 and 1.0"
        elif score >= 0.9:
            return "A"
        elif score >= 0.8:
            return "B"
        elif score >= 0.7:
            return "C"
        elif score >= 0.6:
            return "D"
        else:
            return "F"
    except ValueError:
        return "Invalid input"

# Example usage
print(computeGrade("0.85"))
