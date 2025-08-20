from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def carpool_calculator():
    if request.method == 'POST':
        try:
            cars = int(request.form['cars'])
            space_in_a_car = int(request.form['space_in_a_car'])
            drivers = int(request.form['drivers'])
            passengers = int(request.form['passengers'])

            cars_driven = min(drivers, cars)
            cars_not_driven = cars - cars_driven
            carpool_capacity = cars_driven * space_in_a_car
            average_passengers_per_car = (
                passengers / cars_driven if cars_driven > 0 else 0
            )

            return render_template(
                'result.html',
                cars=cars,
                drivers=drivers,
                cars_driven=cars_driven,
                cars_not_driven=cars_not_driven,
                carpool_capacity=carpool_capacity,
                passengers=passengers,
                average_passengers_per_car=round(average_passengers_per_car, 2)
            )

        except ValueError:
            return "Invalid input. Please enter numbers only."

    return render_template('form.html')

if __name__ == '__main__':
    app.run(debug=True)
