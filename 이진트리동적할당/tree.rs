use std::collections::BTreeMap;
use std::io;

struct Student {  
    midterm_score: i32,
    final_score: i32,
}

fn main() {
    let mut num_students = String::new();
    println!("Enter the number of students: ");
    io::stdin().read_line(&mut num_students).expect("Failed to read line");
    let num_students: i32 = num_students.trim().parse().expect("Invalid input");
    let mut student_map = BTreeMap::new();

    
    for i in 0..num_students {
        let mut name = String::new();
        println!("Enter name of student {}: ", i + 1);
        io::stdin().read_line(&mut name).expect("Failed to read line");
        let name = name.trim().to_string();

        
        let mut midterm_score = String::new();
        println!("Enter midterm score for {}: ", name);
        io::stdin().read_line(&mut midterm_score).expect("Failed to read line");
        let midterm_score: i32 = midterm_score.trim().parse().expect("Invalid input");

        
        let mut final_score = String::new();
        println!("Enter final score for {}: ", name);
        io::stdin().read_line(&mut final_score).expect("Failed to read line");        
        let final_score: i32 = final_score.trim().parse().expect("Invalid input");
   
        student_map.insert(name, Student { midterm_score, final_score });
        
    }
    
    println!("\nStudent Information (Inorder Traversal):");
    for (name, scores) in &student_map {
        println!("Name: {}, Midterm Score: {}, Final Score: {}", name, scores.midterm_score, scores.final_score);
        
    }
}

