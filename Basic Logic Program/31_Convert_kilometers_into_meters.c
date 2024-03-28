/*Convert kilometers into meters*/


	#include <stdio.h>

 		main() 
 				{
    				float kilometers, meters;

    				// Input distance in kilometers
    				printf("\n\n\t Enter distance in kilometers : ");
    				scanf("%f", &kilometers);

    				// Convert kilometers to meters
    				meters = kilometers * 1000;

    				// Display the converted distance in meters
    				printf("\n\n\t Equivalent distance in meters: %.2f", meters);

				}
