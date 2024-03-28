/*Accept month number and display month name*/


#include <stdio.h>

	main() 
	{
    int monthNumber;

    // Input month number
    printf("\n\n\t Enter month number (1-12) : ");
    scanf("%d", &monthNumber);

    // Display month name based on month number
    switch (monthNumber) {
        case 1:
            printf("\n\n\t Month : January");
            break;
        case 2:
            printf("\n\n\t Month : February");
            break;
        case 3:
            printf("\n\n\t Month : March");
            break;
        case 4:
            printf("\n\n\t Month : April");
            break;
        case 5:
            printf("\n\n\t Month : May");
            break;
        case 6:
            printf("\n\n\t Month : June");
            break;
        case 7:
            printf("\n\n\t Month : July");
            break;
        case 8:
            printf("\n\n\t Month : August");
            break;
        case 9:
            printf("\n\n\t Month : September");
            break;
        case 10:
            printf("\n\n\t Month : October");
            break;
        case 11:
            printf("\n\n\t Month : November");
            break;
        case 12:
            printf("\n\n\t Month : December");
            break;
        default:
            printf("\n\n\t Invalid month number entered.");
            break;
    }
}
