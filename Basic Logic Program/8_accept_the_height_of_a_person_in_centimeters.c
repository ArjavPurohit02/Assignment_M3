/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include <stdio.h>

	 main() 
	 		{
    			float height_cm;

   		 		// Input height in centimeters
    			printf("\n\n\t Enter height in centimeters : ");
    			scanf("%f", &height_cm);

    			// Categorize the person based on height
    			if (height_cm < 150) {
        		printf("\n\n\t Person is short.");
    			}
				else if (height_cm >= 150 && height_cm < 180) 
				{
        		printf("\n\n\t Person is of average height.");
    			}
				else
				{
        		printf("\n\n\t Person is tall.");
    			}

			}
