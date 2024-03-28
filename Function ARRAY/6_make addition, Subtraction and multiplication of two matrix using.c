/*WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array*/

#include <stdio.h>

#define ROW 2
#define COL 3

void addMatrix(int (*mat1)[COL], int (*mat2)[COL], int (*sum)[COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(*(sum + i)) = *(*(mat1 + i)) + *(*(mat2 + i));
            *(*(mat1 + i)) = *(*(sum + i));
            *(*(sum + i)) = *(*(sum + i)) + *(*(mat2 + i));
        }
    }
}

void subMatrix(int (*mat1)[COL], int (*mat2)[COL], int (*diff)[COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(*(diff + i)) = *(*(mat1 + i)) - *(*(mat2 + i));
            *(*(mat1 + i)) = *(*(diff + i));
            *(*(diff + i)) = *(*(diff + i)) - *(*(mat2 + i));
        }
    }
}

void mulMatrix(int (*mat1)[COL], int (*mat2)[COL], int (*mul)[COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(*(mul + i)) = mat1[i][j] * mat2[j][i];
            mat2[j][i] = *(*(mul + i));
            *(*(mul + i)) = mat1[i][j] * mat2[j][i];
        }
    }
}

void display(int (*mat)[COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%4d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

 main()
{
    int mat1[ROW][COL] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[ROW][COL] = {{10, 11, 12}, {13, 14, 15}};

    printf("Matrix 1: \n");
    display(mat1);

    printf("Matrix 2: \n");
    display(mat2);

    printf("Result of matrix addition: \n");
    int sum[ROW][COL];
    addMatrix(mat1, mat2, sum);
    display(sum);

    printf("Result of matrix subtraction: \n");
    int diff[ROW][COL];
    subMatrix(mat1, mat2, diff);
    display(diff);

    printf("Result of matrix multiplication: \n");
    int mul[ROW][COL];
    mulMatrix(mat1, mat2, mul);
    display(mul);

}
