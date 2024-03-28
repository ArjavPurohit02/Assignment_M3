/*Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include <stdio.h>

	main() {
    int month, days;

    // Input month number
    printf("\n\n\t Enter month number (1-12): ");
    scanf("%d", &month);

    // Check if the month number is valid
    if (month < 1 || month > 12) {
        printf("\n\n\t Invalid month number entered.");
        return 1; // Exit the program with an error code
    }

    // Determine number of days based on month number
    if (month == 2) {
        days = 28; // Assuming non-leap year
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    // Display number of days in the month
    printf("\n\n\t Number of days in the month: %d", days);

}

