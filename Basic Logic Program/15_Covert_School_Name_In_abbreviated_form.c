		/* Convert school’s name in abbreviated form */
		
	#include <stdio.h>
 	main() 
 		{
    		char school[100];

    		// Input school name
    		printf("Enter the name of the school : ");
    		scanf("%[^\n]s", school);

    		// Compare school name and print abbreviation
    		if (strcmp(school, "Aditya Silver Oak University") == 0) {
        	printf("\n\n\t ASOIT");
    	}
    		else if (strcmp(school, "Ahmedabad University") == 0) {
        	printf("\n\n\t AU");
    	}
    		else if (strcmp(school, "Gujarat Law Society") == 0) {
        	printf("\n\n\t GLS");
    	}
    		else if (strcmp(school, "Pandit Deendayal energy University") == 0) {
        	printf("\n\n\t PDEU");
    	}
    		else if (strcmp(school, "Gujarat University") == 0) {
        	printf("\n\n\t GU");
    	}
    		else if (strcmp(school, "Gujarat Technological University") == 0) {
        	printf("\n\n\t GTU");
    	}
    		else if (strcmp(school, "Karnavati University") == 0) {
        	printf("\n\n\t KU");
    	}
    		else if (strcmp(school, "Silver Oak University") == 0) {
        	printf("\n\n\t SOU");
    	}
    		else if (strcmp(school, "Pacific Medical College") == 0) {
        	printf("\n\n\t PMCH");
    	}
    		else if (strcmp(school, "Geetanjali Medical College") == 0) {
        	printf("\n\n\t GMC");
    	}
    		else if (strcmp(school, "Jain University") == 0) {
        	printf("\n\n\t JU");
    	}
    		else 
		{
        	printf("Not Found\n");
    	}
		
		}
