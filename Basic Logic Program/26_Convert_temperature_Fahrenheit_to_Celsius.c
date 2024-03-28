/*Convert temperature Fahrenheit to Celsius*/


		#include <stdio.h>
		
		main() 
				{
    				float fahrenheit, celsius;

    				// Input temperature in Fahrenheit
    				printf("Enter temperature in Fahrenheit: ");
    				scanf("%f", &fahrenheit);

    				// Convert Fahrenheit to Celsius using the formula
    				celsius = (fahrenheit - 32) / 1.8;

    				// Display the converted temperature in Celsius
    				printf("Temperature in Celsius: %.2f\n", celsius);

				}
