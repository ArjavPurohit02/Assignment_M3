		/* Find circumference of Triangle formula : triangle = a + b + c */
		
	#include <stdio.h>
	main() 
	
		{
    		// Declare variables
    		float side1, side2, side3, perimeter;

   		 	// Input the lengths of the sides from the user
    		printf("\n\n\t Enter the length of side 1 of the triangle : ");
    		scanf("%f", &side1);

    		printf("\n\n\t Enter the length of side 2 of the triangle : ");
    		scanf("%f", &side2);

   	 		printf("\n\n\t Enter the length of side 3 of the triangle : ");
    		scanf("%f", &side3);

    		// Calculate the perimeter
  	  		perimeter = side1 + side2 + side3;

    		// Display the result
    		printf("\n\n\t The circumference (perimeter) of the triangle with sides %.2f, %.2f, and %.2f is: %.2f", side1, side2, side3, perimeter);

    		return 0;
		
		}

