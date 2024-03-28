/*. C Program to Reverse a Number Using FOR Loop
Series Program : */

#include <stdio.h>

main() 
		{
    		int num, reverse = 0;
    		printf("\n\n\t Enter a number to reverse : ");
    		scanf("%d", &num);

    		// Loop to reverse the number
    		for (; num != 0; num /= 10) {
        	reverse = reverse * 10 + (num % 10);
    	}

    		printf("\n\n\t Reversed number : %d", reverse);
	}
