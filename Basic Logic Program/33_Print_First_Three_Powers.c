/*C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)*/


#include <stdio.h>

main() 	
		{
    		int num, power1, power2, power3;

    		// Input an integer
    		printf("\n\n\t Enter an integer : ");
    		scanf("%d", &num);

    		// Calculate powers
    		power1 = num;
    		power2 = num * num;
    		power3 = num * num * num;

    		// Display the first three powers
   	 		printf("\n\n\t First power: %d", power1);
    		printf("\n\n\t Second power: %d", power2);
    		printf("\n\n\t Third power: %d", power3);

}

