/*WAP to accept 5 numbers from user and display all numbers*/


#include <stdio.h>

main() 
		{
    		int i, num;

    		printf("\n\n\t Enter 5 numbers : ");
    		for (i = 0; i < 5; i++) {
        	scanf("%d", &num);
        	printf("\n\n\t %d", num);
    	}
	}
