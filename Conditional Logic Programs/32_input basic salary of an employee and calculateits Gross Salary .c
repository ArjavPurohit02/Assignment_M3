/*.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/


#include <stdio.h>

	main() 
			{
    			float basicSalary, grossSalary;
    			float hra, da;

    // Input basic salary
    printf("\n\n\t Enter the basic salary : ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on basic salary
    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary; // HRA is 20%
        da = 0.8 * basicSalary;  // DA is 80%
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary; // HRA is 25%
        da = 0.9 * basicSalary;   // DA is 90%
    } else {
        hra = 0.3 * basicSalary;  // HRA is 30%
        da = 0.95 * basicSalary;  // DA is 95%
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Display gross salary
    printf("\n\n\t Gross salary: Rs. %.2f", grossSalary);

}
