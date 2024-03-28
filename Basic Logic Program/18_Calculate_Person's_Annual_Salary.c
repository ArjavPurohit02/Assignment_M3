		/*Calculate person’s Annual salary*/
		
		#include <stdio.h>
		main() 
			{
    			float monthlySalary, annualSalary;

   	 			// Input monthly salary
    			printf("\n\n\t Enter the monthly salary : $");
    			scanf("%f", &monthlySalary);

    			// Calculate annual salary
    			annualSalary = monthlySalary * 12;

    			// Display annual salary
    			printf("\n\n\t The annual salary is : $%.2f", annualSalary);

}
