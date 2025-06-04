use std::io;

fn main() {
    println!("Enter temperature in Celsius:");

    // Read input
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");

    // Parse input to a float
    let celsius: f32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Invalid input. Please enter a number.");
            return;
        }
    };

    let fahrenheit = celsius_to_fahrenheit(celsius);
    println!("{:.2}°C = {:.2}°F", celsius, fahrenheit);
}

fn celsius_to_fahrenheit(celsius: f32) -> f32 {
    (celsius * 9.0 / 5.0) + 32.0
}

