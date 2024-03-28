		/* Calculate compound interest */
		
		#include <stdio.h>
		 main() 
		 		{
    				float principal, rate, time, compoundInterest;

    				// Input principal amount, rate, time
    				printf("\n\n\t Enter the principal amount : $");
    				scanf("%f", &principal);

    				printf("\n\n\t Enter the annual interest rate (as a decimal) : ");
    				scanf("%f", &rate);

    				printf("\n\n\t Enter the time the money is invested for (in years) : ");
    				scanf("%f", &time);

   			 		// Calculate compound interest
    				float factor = 1.0f + rate;
    				float result = 1.0f;
    				int years = 0;
    				while (years < time)
				{
        			result *= factor;
       	 			years++;
    			}
    				compoundInterest = principal * (result - 1.0f);

    				// Display the compound interest
    				printf("\n\n\t The compound interest is : $%.2f", compoundInterest);

				}
