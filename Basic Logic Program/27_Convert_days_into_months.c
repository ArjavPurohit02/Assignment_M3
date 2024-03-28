/*Convert days into months*/


	#include <stdio.h>

	main() 
			{
   	 			int days, months;

    			// Input number of days
    			printf("\n\n\t Enter number of days : ");
    			scanf("%d", &days);

   	 			// Convert days to months (assuming 30 days per month)
    			months = days / 30;

    			// Display the converted value
    			printf("\n\n\t Equivalent months: %d", months);

			}
