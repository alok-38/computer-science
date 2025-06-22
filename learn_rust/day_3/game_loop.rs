use std::io::{self, Write};

fn main() {
    loop {
        print!("Enter a number (or 'q' or 'Q' to quit): ");
        io::stdout().flush().unwrap(); // Ensure prompt is shown immediately

        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        let input = input.trim();

        // Exit condition
        if input.eq_ignore_ascii_case("q") {
            println!("Exiting game loop.");
            break;
        }

        // Try parsing input as number
        match input.parse::<i32>() {
            Ok(num) => {
                if num > 0 {
                    println!("Positive number");
                } else if num < 0 {
                    println!("Negative number");
                } else {
                    println!("Zero");
                }
            }
            Err(_) => {
                println!("Invalid input, please enter a number or 'q' to quit.");
            }
        }
    }
}

