use std::any::type_name;

fn print_type_of<T>(_: &T) {
    println!("Type: {}", type_name::<T>());
}

fn main() {
    let x = 42;
    let string_1 = "hello";
    let string_2 = String::from("hi");

    print_type_of(&x);
    print_type_of(&string_1);
    print_type_of(&string_2);
}


