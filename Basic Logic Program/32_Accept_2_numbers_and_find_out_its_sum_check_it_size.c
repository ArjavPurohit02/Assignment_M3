/*Accept 2 numbers and find out its sum check it size*/


	#include <stdio.h>

		int main() 
		{
    		int num1, num2, sum;
    
    		// Input two numbers
    		printf("\n\n\t Enter first number : ");
    		scanf("%d", &num1);

    		printf("\n\n\t Enter second number : ");
    		scanf("%d", &num2);

    		// Calculate the sum
    		sum = num1 + num2;

    		// Display the sum
    		printf("\n\n\t Sum of %d and %d is %d", num1, num2, sum);

    		// Check the size of the sum
    		if (sum >= -32768 && sum <= 32767)
			 {
        		printf("\n\n\t Size of sum is short");
    	}
	 			else if (sum >= -2147483648 && sum <= 2147483647) 
				 {
        			printf("\n\n\t Size of sum is int");
    	}
		 			else
		 	{
        			printf("\n\n\t Size of sum is long long");
    	}
	}
