/*. 1 + 2 + 3 + 4 + 5 + ... + n*/


#include <stdio.h>

main()
		{
    		int num, reverse = 0, remainder;
			printf("\n\n\t Input a number : ");
    		scanf("%d", &num);

    		for(; num != 0; num = num / 10){
        	remainder = num % 10;
        	reverse = reverse * 10 + remainder;
    	}

   			printf("\n\n\t Reversed Number : %d", reverse);

		}		
