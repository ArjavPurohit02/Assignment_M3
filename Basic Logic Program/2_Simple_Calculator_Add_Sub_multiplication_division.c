		/*Write a program to make Simple calculator (to make addition, subtraction,
		multiplication, division and modulo)*/
		
#include <stdio.h>

main() 
{
    char operator;
    int num1, num2, result;

    printf("\n\n\t Enter operator (+, -, *, /, %%) : ");
    scanf(" %c", &operator);

    printf("\n\n\t Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if (operator == '+') result = num1 + num2;
    else if (operator == '-') result = num1 - num2;
    else if (operator == '*') result = num1 * num2;
    else if (operator == '/') result = (num2 != 0) ? num1 / num2 : 0;
    else if (operator == '%') result = (num2 != 0) ? num1 % num2 : 0;
    else 
	{
    	
        	printf("\n\n\t Error! Invalid operator.\n");
        	return 1; // Exit with an error code
    	}

    printf("Result: %d\n", result);
    return 0;
}

