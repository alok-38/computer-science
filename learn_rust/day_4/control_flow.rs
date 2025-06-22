fn main() {
    let number = 6;

if number % 4 == 0 {
    println!("Divisible by 4");
} else if number % 3 == 0 {
    println!("Divisible by 3");
} else {
    println!("Not divisible by 3 or 4");
}

for i in 1..5 {
    println!("i = {}", i);
}

let mut count = 0;
while count < 5 {
    println!("count = {}", count);
    count += 1;
}
}
