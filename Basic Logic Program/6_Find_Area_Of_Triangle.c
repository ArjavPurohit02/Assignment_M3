		/*Find area of Triangle Formula : A = 1/2 × b × h*/
		
	#include <stdio.h>
	main() 
	
		{
    		// Declare variables
    		float base, height, area;

    		// Input base and height from user
    		printf("\n\n\t Enter the base of the triangle : ");
    		scanf("%f", &base);

    		printf("\n\n\t Enter the height of the triangle : ");
    		scanf("%f", &height);

    		// Calculate area
    		area = 0.5f * base * height;

    		// Display the result
    		printf("\n\n\t The area of the triangle with base %.2f and height %.2f is: %.2f", base, height, area);

    		return 0;
		}

