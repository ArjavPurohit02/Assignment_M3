		/* Accept number of students from user. I need to give 5 apples to each
		student. How many apples are required? */
		
	#include <stdio.h>
	main() 
	
		{
    		int numStudents;
    		int totalApples;

    		// Input number of students from user
    		printf("\n\n\t Enter the number of students: ");
    		scanf("%d", &numStudents);

    		// Calculate total apples required
    		totalApples = numStudents * 5;

    		// Display the result
    		printf("\n\n\t Total apples required for %d students: %d", numStudents, totalApples);

    		return 0;
		}

