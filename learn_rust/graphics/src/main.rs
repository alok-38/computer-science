use minifb::{Window, WindowOptions};

fn main() {
    let width = 800;
    let height = 600;
    let mut buffer: Vec<u32> = vec![0; width * height];

    // Fill the buffer with a color (e.g., blue)
    for i in 0..buffer.len() {
        buffer[i] = 0x0000FF; // RGB hex format: Blue
    }

    let mut window = Window::new("Graphics with Rust", width, height, WindowOptions::default())
        .unwrap_or_else(|e| {
            panic!("{}", e);
        });

    while window.is_open() && !window.is_key_down(minifb::Key::Escape) {
        window.update_with_buffer(&buffer, width, height).unwrap();
    }
}

