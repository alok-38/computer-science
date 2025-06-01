struct User {
    username: String,
    age: u32,
    is_active: bool,
}

fn main() {
    let user1 = User {
        username: String::from("alice"),
        age: 30,
        is_active: true,
    };

    println!("Username: {}, Age: {}, Active: {}", user1.username, user1.age, user1.is_active);
}

