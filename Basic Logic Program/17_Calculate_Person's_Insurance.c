		/*Calculate person’s insurance premium based on salary*/
		
	#include <stdio.h>
	 main() 
	 
	 	{
    		float salary, premium;

    		// Input annual salary
    		printf("\n\n\t Enter your annual salary : $");
    		scanf("%f", &salary);

    		// Calculate premium based on salary
    		if (salary <= 30000.0f) {
        	premium = salary * 0.02f;
    	}
    		else if (salary <= 60000.0f) {
        	premium = salary * 0.04f;
    		}
    			else
	 	{
       		 	premium = salary * 0.06f;
    	}

    			// Display insurance premium
    			printf("\n\n\t Based on your salary of $%.2f, your insurance premium is : $%.2f", salary, premium);

}
