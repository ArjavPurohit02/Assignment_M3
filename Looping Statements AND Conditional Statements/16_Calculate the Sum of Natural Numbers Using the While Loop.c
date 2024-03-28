/*Calculate the Sum of Natural Numbers Using the While Loop*/


#include <stdio.h>
 
main() 
		{
    		int limit;
    		int number = 1;
    		int sum = 0;

    		printf("\n\n\t Enter the limit (a positive integer) : ");
    		scanf("%d", &limit);

    		// Check if the limit is a positive integer
   	 		if (limit <= 0) {
        	printf("\n\n\t Invalid input ! Please enter a positive integer.");
        	return 1; // Exit the program with an error code
    	}

    		while (number <= limit) {
        	sum += number;
        	number++;
    	}

    		printf("\n\n\t The sum of natural numbers up to %d is : %d", limit, sum);
		}
