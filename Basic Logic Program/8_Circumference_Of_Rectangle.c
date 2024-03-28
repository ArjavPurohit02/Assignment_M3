		/* Find circumference of Rectangle formula : C = 4 * a */
		
	#include <stdio.h>
	main()
	
		{
    		// Declare variables
    		float length, width, circumference;

   			// Input length and width from user
    		printf("\n\n\t Enter the length of the rectangle : ");
    		scanf("%f", &length);		

    		printf("\n\n\t Enter the width of the rectangle : ");
    		scanf("%f", &width);

    		// Calculate circumference
    		circumference = 2 * (length + width);

    		// Display the result
    		printf("\n\n\t The circumference of the rectangle with length %.2f and width %.2f is: %.2f", length, width, circumference);

    		return 0;
		}
