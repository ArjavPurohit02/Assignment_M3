/*Make A Pattern */


#include <stdio.h>

 main() 
 			{
    			int rows, i, j;

   	 			printf("\n\n\t Enter the number of rows for the pattern : ");
    			scanf("%d", &rows);

    			i = 1;
    			while (i <= rows) {
        		j = 1;
        		while (j <= i) {
            	printf("%d ", j);
            	j++;
        	}
        		printf("\n");
        		i++;
    	}

	}

