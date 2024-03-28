		/*Convert country’s name in abbreviate form*/
		
		#include <stdio.h>
		main() 
			{
    			char country[100];

    			// Input country name
    			printf("\n\n\t Enter the name of the country : ");
    			scanf("%[^\n]s", country);

    			// Convert input to uppercase for easier comparison
    			int i = 0;
    			while (country[i]) 
					{
        				country[i] = toupper(country[i]);
        				i++;
   					 }

    					// Compare country name and print abbreviation
    					if (strcmp(country, "INDIA") == 0) 
						{
        					printf("\n\n\t IND");
    					}
    						else if (strcmp(country, "UNITED KINGDOM") == 0) {
        					printf("\n\n\t UK");
   						}
    						else if (strcmp(country, "CANADA") == 0) {
        					printf("\n\n\t CAN");
    					}
    						else if (strcmp(country, "AUSTRALIA") == 0) {
        					printf("\n\n\t AUS");
    					}
    						else if (strcmp(country, "UNITED STATES OF AMERICA") == 0) {
     	  	 				printf("\n\n\t USA");
    					}
    						else if (strcmp(country, "FRANCE") == 0) {
        					printf("\n\n\t FRA");
    					}
    						else if (strcmp(country, "ITALY") == 0) {
        					printf("\n\n\t ITA");
    					}
    						// Add more countries as needed
    						else
						{
        					printf("\n\n\t Not Found");
    					}


						}
