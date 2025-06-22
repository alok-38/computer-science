#[allow(dead_code)]
#[derive(Debug, Clone, Copy)]
struct Pixel {
    r: u8,
    g: u8,
    b: u8,
    a: u8, // optional alpha
}

fn main() {
    let red_pixel = Pixel { r: 255, g: 0, b: 0, a: 255 };
    println!("{:?}", red_pixel);
}

