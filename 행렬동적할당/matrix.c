#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

void deallocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
	  for (int j = 0; j < cols; j++) {
               printf("Enter element [%d][%d]: ", i, j);
               scanf("%d", &matrix[i][j]);
            }
       }
}

void addMatrices(int** matrix1, int** matrix2, int** result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
	        }
        }
    }

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
              printf("%d ", matrix[i][j]);
        }
        printf("\n");
     }
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int** matrix1 = allocateMatrix(rows, cols);
    int** matrix2 = allocateMatrix(rows, cols);
    int** result = allocateMatrix(rows, cols);



    printf("Enter elements for matrix 1:\n");
    inputMatrix(matrix1, rows, cols);


    printf("Enter elements for matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, result, rows, cols);

    printf("Resultant matrix after addition:\n");
    printMatrix(result, rows, cols);


    deallocateMatrix(matrix1, rows);
    deallocateMatrix(matrix2, rows);
    deallocateMatrix(result, rows);

    return 0;
}
