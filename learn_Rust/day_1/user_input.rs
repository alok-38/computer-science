fn main() {
    let mut line = String::new(); // Create a mutable string to store input
    println!("Enter your name: "); // Prompt user for input

    // Read line from standard input, b1 is number of bytes read
    let b1 = std::io::stdin().read_line(&mut line).unwrap();

    // Remove trailing newline character from input
    let line = line.trim_end();

    // Print greeting and number of bytes read
    println!("Hello, {}", line);
    println!("Number of bytes read: {}", b1);
}

