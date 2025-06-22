use image::{ImageBuffer, RgbaImage};

const WIDTH: u32 = 256;
const HEIGHT: u32 = 1;

fn main() {
    let mut img: RgbaImage = ImageBuffer::new(WIDTH, HEIGHT);

    for x in 0..WIDTH {
        let red_value = x as u8;         // Red channel varies from 0 to 255
        let pixel = image::Rgba([red_value, 0, 0, 255]);  // Red, Green=0, Blue=0, Alpha=255 (opaque)

        img.put_pixel(x, 0, pixel);
    }

    img.save("red_gradient.png").expect("Failed to save image");
    println!("Saved 'red_gradient.png'");
}

