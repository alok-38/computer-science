fn main() {
    let mut x = 5;
    println!("x is: {}", x);

    // This will cause a compile-time error:
    // Unless you prefix it with mut
    x = 6;
    println!("x is now: {}", x);
}

