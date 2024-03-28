/*Accept 5 employees name and salary and count average and total salary*/


#include <stdio.h>

main() 
		{
    		char names[5][50];
    		float salaries[5], totalSalary = 0, averageSalary;

    		for (int i = 0; i < 5; i++) {
        	printf("Enter name of employee %d: ", i + 1);
        	scanf("%s", names[i]);

        	printf("Enter salary of employee %d: ", i + 1);
        	scanf("%f", &salaries[i]);

        	totalSalary += salaries[i];
    	}

    		averageSalary = totalSalary / 5;

    		printf("\n\n\t Total Salary: %.2f", totalSalary);
    		printf("\n\n\t Average Salary: %.2f", averageSalary);

    	}
