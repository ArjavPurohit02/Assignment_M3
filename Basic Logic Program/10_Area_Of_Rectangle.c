		/* find the area of a rectangular prism formula : A=2(wl+hl+hw) */
		
	#include <stdio.h>
	main() 
	
		{
    		// Declare variables
    		float width, length, height, surface_area;

    		// Input width, length, and height from user
    		printf("\n\n\t Enter the width of the rectangular prism : ");
    		scanf("%f", &width);

    		printf("\n\n\t Enter the length of the rectangular prism : ");
    		scanf("%f", &length);

    		printf("\n\n\t Enter the height of the rectangular prism : ");
    		scanf("%f", &height);

    		// Calculate surface area
    		surface_area = 2 * (width * length + height * length + height * width);

    		// Display the result
    		printf("\n\n\t The surface area of the rectangular prism with width %.2f, length %.2f, and height %.2f is: %.2f", width, length, height, surface_area);

    		return 0;
		
		}
