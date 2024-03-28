/*.Perform 2D matrix array*/


#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrix arrays
void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrix arrays
void subtractMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrix arrays
void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix array
void displayMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

 main() {
    int mat1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    printf("Matrix 1:\n");
    displayMatrix(mat1);

    printf("Matrix 2:\n");
    displayMatrix(mat2);

    printf("Addition:\n");
    addMatrices(mat1, mat2, result);
    displayMatrix(result);

    printf("Subtraction:\n");
    subtractMatrices(mat1, mat2, result);
    displayMatrix(result);

    printf("Multiplication:\n");
    multiplyMatrices(mat1, mat2, result);
    displayMatrix(result);

}
