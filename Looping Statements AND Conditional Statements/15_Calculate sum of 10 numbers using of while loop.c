/*Calculate sum of 10 numbers using of while loop*/


#include <stdio.h>

main() 
		{
    		int count = 1; // Counter variable
    		int sum = 0;   // Variable to store the sum
    		int num;       // Variable to hold the user input

    		printf("\n\n\t Enter 10 integers : ");

    		// Using a while loop to input 10 numbers and calculate their sum
    		while (count <= 10) 
				{
        			printf("\n\n\t Enter number %d : ", count);
        			scanf("%d", &num);
        			sum += num; // Add the current number to the sum
        			count++;    // Increment the counter
    			}

    				printf("\n\n\t Sum of the 10 numbers is : %d", sum);
				}
