					//Conditional Logic Programs:
/*Write a C program to accept two integers and check whether they are equal
or not*/

#include <stdio.h>

	 main() {
    int num1, num2;

    // Input two integers
    printf("\n\n\t Enter first integer : ");
    scanf("%d", &num1);

    printf("\n\n\t Enter second integer : ");
    scanf("%d", &num2);

    // Check if the integers are equal
    if (num1 == num2) {
        printf("\n\n\t The two integers are equal.");
    } else {
        printf("\n\n\t The two integers are not equal.");
    }

}

