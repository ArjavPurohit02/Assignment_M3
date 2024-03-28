		/*. Find Area of Cube formula : a = 6a2 */
		
	#include <stdio.h>
	main() 
		{
    		// Declare variables
    		float side, surface_area;

    		// Input side length from user
    		printf("\n\n\t Enter the length of the side of the cube : ");
    		scanf("%f", &side);

    		// Calculate surface area
    		surface_area = 6.0f * side * side;

    		// Display the result
    		printf("\n\n\t Surface area of the cube with side %.2f units is: %.2f square units", side, surface_area);
			return 0;
		}

