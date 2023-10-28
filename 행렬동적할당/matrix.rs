fn add_matrices(matrix1: &Vec<Vec<i32>>, matrix2: &Vec<Vec<i32>>) -> Vec<Vec<i32>> {
    let rows = matrix1.len();
    let cols = matrix1[0].len();

    let mut result = vec![vec![0; cols]; rows];

    for i in 0..rows {
        for j in 0..cols {
            result[i][j] = matrix1[i][j] + matrix2[i][j];                 
        }
    }
   
    result
}

fn main() {
    let mut input = String::new();
    println!("Enter the number of rows: ");
    std::io::stdin().read_line(&mut input).unwrap();
    let rows: usize = input.trim().parse().unwrap();


    
    input.clear();
    println!("Enter the number of columns: ");
    std::io::stdin().read_line(&mut input).unwrap();
    let cols: usize = input.trim().parse().unwrap();


    
    let mut matrix1 = vec![vec![0; cols]; rows];
    let mut matrix2 = vec![vec![0; cols]; rows];


    
    println!("Enter elements for matrix 1:");
    for i in 0..rows {
        for j in 0..cols {
            input.clear();
            std::io::stdin().read_line(&mut input).unwrap();
            matrix1[i][j] = input.trim().parse().unwrap();   
        }
    }


    
    println!("Enter elements for matrix 2:");
    for i in 0..rows {
        for j in 0..cols {
            input.clear();
            std::io::stdin().read_line(&mut input).unwrap();
            matrix2[i][j] = input.trim().parse().unwrap();   
        }                                              
    }


    
    let result = add_matrices(&matrix1, &matrix2);
    
    println!("Resultant matrix after addition:");
    for i in 0..rows {
        for j in 0..cols {
            print!("{} ", result[i][j]);
            
        }
        println!();
    }
}
