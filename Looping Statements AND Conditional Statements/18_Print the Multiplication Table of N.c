/*Write a C Program to Print the Multiplication Table of N*/


#include <stdio.h>

 main() {
    int N, i;

    // Input the number for which multiplication table is to be printed
    printf("\n\n\t Enter a number : ");
    scanf("%d", &N);

    printf("\n\n\t Multiplication table of %d : ", N);

    i = 1;
    while (i <= 10) {
        printf("\n\n\t %d x %d = %d", N, i, N * i);
        i++;
    }

}

