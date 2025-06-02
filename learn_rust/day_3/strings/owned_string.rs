fn main() {
    let mut owned_string: String = String::from("Hello");
    owned_string.push_str(", world!");
    println!("{}", owned_string); // "Hello, world!"
}
