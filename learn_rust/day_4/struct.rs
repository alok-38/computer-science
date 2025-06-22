struct Player {
    name: String,
    score: u32,
}

fn main() {
    let player1 = Player {
        name: String::from("Alice"),
        score: 100,
    };
     println!("Player: {}, Score: {}", player1.name, player1.score);
}

