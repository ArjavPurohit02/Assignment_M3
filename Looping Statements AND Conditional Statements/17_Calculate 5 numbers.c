/*Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/

	#include <stdio.h>

	main()
			 {
    			int numbers[5];
    			int evenCount = 0;
    			int oddCount = 0;
    			int i = 0;

    			printf("\n\n\t Enter 5 integers : ");

    			// Input 5 integers
    			while (i < 5) {
        		scanf("%d", &numbers[i]);
        		i++;
    		}

    			// Calculate number of even and odd numbers
    			i = 0;
    			while (i < 5) {
        		if (numbers[i] % 2 == 0) {
            	evenCount++;
        	} else {
            	oddCount++;
        }
        		i++;
    	}

    		printf("\n\n\t Number of even numbers : %d", evenCount);
    		printf("\n\n\t Number of odd numbers : %d", oddCount);

	}		
