fn main() {
    let a: i32 = 10;
    let b: f64 = 20.5;
    let c: bool = true;
    let d: char = 'R';
    
    let tup: (i32, f64, char) = (a, b, d);
    let arr: [i32; 3] = [1, 2, 3];

    println!("a = {}, b = {}, c = {}, d = {}", a, b, c, d);
    println!("Tuple values: {}", tup);
    println!("Array values: {}", arr);
}

