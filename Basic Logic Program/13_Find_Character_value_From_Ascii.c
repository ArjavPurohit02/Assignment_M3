		/* Find character value from ascii */
		
	#include <stdio.h>
	main() 
	
		{
    		int asciiValue;

    		// Input ASCII value from user
    		printf("\n\n\t Enter ASCII value : ");
    		scanf("%d", &asciiValue);

    		// Typecast ASCII value to char
    		char character = (char)asciiValue;

    		// Display the character
    		printf("\n\n\t The character for ASCII value %d is : %c", asciiValue, character);

    		return 0;
		}
