/*Convert years into days and months*/

	
	#include <stdio.h>

	main() 
			{
   	 			int years, days, months;

    			// Input number of years
    			printf("\n\n\t Enter number of years : ");
    			scanf("%d", &years);

    			// Convert years to days (assuming 365 days per year)
    			days = years * 365;

   	 			// Convert days to months (assuming 30 days per month)
    			months = days / 30;

    			// Display the converted values
    			printf("\n\n\t Equivalent days: %d", days);
    			printf("\n\n\t Equivalent months: %d", months);

}
