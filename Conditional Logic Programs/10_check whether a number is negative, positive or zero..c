/*WAP to check whether a number is negative, positive or zero.*/


#include <stdio.h>

 	main() 
	 		{
    int num;

    // Input a number
    printf("\n\n\t Enter a number : ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("\n\n\t %d is positive.", num);
    } 
		else if (num < 0) {
        printf("\n\n\t %d is negative.", num);
    } 
		else 
	{
        printf("\n\n\t The number is zero.");
    }

}
