def calculate_circle_area(radius):
    PI = 3.14159
    area = PI * (radius ** 2)
    return area

radius = float(input("Enter radius: "))
print(f"Area of a circle of radius {radius} = {calculate_circle_area(radius)}")

