use std::io;
use rand::Rng;

fn main() {
    // Get an RNG:
    let mut rng = rand::thread_rng();

    for _ in 0..10 {
        let num: u32 = rng.gen();
        println!("Random number: {}", num);
    }
}

