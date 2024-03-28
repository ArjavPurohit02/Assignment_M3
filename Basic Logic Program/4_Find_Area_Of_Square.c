		/*Find Area of Square formula : a = a2*/
		
	#include <stdio.h>
	 main() 
	 {
    	// Declare variables
    	float side, area;

    	// Input side length from user
    	printf("\n\n\t Enter the length of the side of the square : ");
    	scanf("%f", &side);

    	// Calculate area
    	area = side * side;

    	// Display the result
    	printf("\n\n\t The area of the square with side %.2f is : %.2f", side, area);

    	return 0;
}

