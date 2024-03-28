		/*Accept monthly salary from the user and deduct 10% insurance premium,
		10% loan installment find out of remaining salary*/
		
		#include <stdio.h>
		main() 
				{
    				float monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    				// Input monthly salary
    				printf("\n\n\t Enter the monthly salary : $");
    				scanf("%f", &monthlySalary);

    				// Calculate insurance premium (10%)
    				insurancePremium = 0.1 * monthlySalary;

    				// Calculate loan installment (10%)
    				loanInstallment = 0.1 * monthlySalary;

    				// Calculate remaining salary
    				remainingSalary = monthlySalary - insurancePremium - loanInstallment;

    				// Display results
   	 				printf("\n\n\t Monthly Salary : $%.2f", monthlySalary);
    				printf("\n\n\t Insurance Premium (10%%) : $%.2f", insurancePremium);
    				printf("\n\n\t Loan Installment (10%%) : $%.2f", loanInstallment);
    				printf("\n\n\t Remaining Salary: $%.2f", remainingSalary);

				}
