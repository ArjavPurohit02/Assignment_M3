		/*. Find area of Rectangle Formula : A=wl */
		
	#include <stdio.h>
	main() 
		{
    		// Declare variables
    		float width, length, area;

    		// Input width and length from user
    		printf("\n\n\t Enter the width of the rectangle : ");
    		scanf("%f", &width);

    		printf("\n\n\t Enter the length of the rectangle : ");
    		scanf("%f", &length);

    		// Calculate area
    		area = width * length;

    		// Display the result
    		printf("\n\n\t The area of the rectangle with width %.2f and length %.2f is: %.2f", width, length, area);

    		return 0;
		}

