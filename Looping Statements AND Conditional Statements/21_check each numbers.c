/*Accept 3 numbers from user using while loop and check each numbers
palindrome*/

#include <stdio.h>

 main()
  		{
    		int num, reversed = 0, original, remainder;

    		printf("\n\n\t Enter a number : ");
    		scanf("%d", &num);

    		original = num; // Store the original number

    		// Reverse the number
    		while (num != 0) {
        	remainder = num % 10;
        	reversed = reversed * 10 + remainder;
        	num /= 10;
    	}

    		// Check if the reversed number is equal to the original number
    		if (original == reversed) {
        	printf("\n\n\t %d is a palindrome.", original);
    		} else {
        	printf("\n\n\t %d is not a palindrome.", original);
    	}

	}
