/*WAP to convert years into days and days into years*/


	#include <stdio.h>

 	main() 
	 		{
    			int years, days;

    			// Input number of years
    			printf("\n\n\t Enter number of years : ");
    			scanf("%d", &years);

    			// Convert years to days
    			days = years * 365;

    			// Display the equivalent days
    			printf("\n\n\t Equivalent days: %d", days);

    			// Input number of days
    			printf("\n\n\t Enter number of days : ");
    			scanf("%d", &days);

    			// Convert days to years
    			years = days / 365;

    			// Display the equivalent years
    			printf("\n\n\t Equivalent years: %d", years);

			}
