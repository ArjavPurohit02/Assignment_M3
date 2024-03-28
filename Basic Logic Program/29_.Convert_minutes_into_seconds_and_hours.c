/*Convert minutes into seconds and hours*/


	#include <stdio.h>

 	main() 
	 		{
    			int minutes, hours, seconds;

    			// Input number of minutes
    			printf("\n\n\t Enter number of minutes : ");
    			scanf("%d", &minutes);

    			// Convert minutes to hours and seconds
   	 			hours = minutes / 60;
    			seconds = minutes * 60;

    			// Display the converted values
    			printf("\n\n\t Equivalent hours : %d", hours);
    			printf("\n\n\t Equivalent seconds : %d", seconds);

			}
