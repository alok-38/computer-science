fn main() {
    let name = String::from("Alice");
    // When You Assign, You Move Ownership
    let another = name.clone();
    println!("Another: {}", another);
    println!("Yet another: {}", name);
}

