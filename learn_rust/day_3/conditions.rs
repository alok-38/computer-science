fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let num: i32 = input.trim().parse().unwrap();

    if num > 0 {
        println!("Positive number");
    } else if num < 0 {
        println!("Negative number");
    } else {
        println!("Zero");
    }
}

