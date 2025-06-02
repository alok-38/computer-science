use std::io;

fn main() {
    println!("Please enter a number:");

    // Create a mutable String to hold input
    let mut input = String::new();

    // Read a line from standard input
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    // Trim whitespace and try to parse input into i32
    let num: i32 = input.trim().parse().expect("Please type a number!");

    println!("You entered: {}", num);
    println!("Number + 10 = {}", num + 10);
}

