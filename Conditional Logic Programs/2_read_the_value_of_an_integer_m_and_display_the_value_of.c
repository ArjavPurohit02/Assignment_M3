/*Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/

#include <stdio.h>

main() 
		{
    int m;
    int n = 1;  // Initialize n to 1

    // Input the value of m
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Display the value of n as 1
    printf("The value of n is: %d\n", n);

}
