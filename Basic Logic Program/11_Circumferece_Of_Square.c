		/* Find circumference of square formula : C = 4 * a */
		
	#include <stdio.h>
	main() 
	
		{
    		// Declare variables
    		float side, circumference;

    		// Input side length from user
    		printf("\n\n\t Enter the length of the side of the square : ");
    		scanf("%f", &side);

    		// Calculate circumference
    		circumference = 4 * side;

    		// Display the result
    		printf("\n\n\t The circumference of the square with side %.2f is: %.2f", side, circumference);

    		return 0;
		
		}
