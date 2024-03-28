/*WAP to find number is even or odd using ternary operator*/


#include <stdio.h>

main() 
		{
    int num;

    // Input a number
    printf("\n\n\t Enter a number : ");
    scanf("%d", &num);

    // Check if the number is even or odd using ternary operator
    (num % 2 == 0) ? printf("\n\n\t %d is even.", num) : printf("\n\n\t %d is odd.", num);


}

