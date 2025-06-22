fn main() {
    let a: i32 = 10;
    let b: f64 = 3.14;
    let c: bool = true;
    let d: char = 'z';

    let tuple: (i32, f64, char) = (500, 6.4, 'a');
    let (x, y, z) = tuple;
    println!("x = {}, y = {}, z = {}", x, y, z);

    let my_array = [1, 2, 3, 4, 5];
    println!("First element: {}", my_array[0]);

    println!("{}, {}, {}, {}", a, b, c, d);
}

