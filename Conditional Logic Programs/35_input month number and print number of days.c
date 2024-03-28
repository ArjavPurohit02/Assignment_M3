/*.Accept the input month number and print number of days in that
month.*/

#include <stdio.h>

 main() {
    int month, days;

    // Input month number
    printf("\n\n\t Enter month number (1-12) : ");
    scanf("%d", &month);

    // Determine number of days based on month number
    if (month < 1 || month > 12) {
        printf("\n\n\t Invalid month number entered.");
        return 1; // Exit with an error code
    }

    if (month == 2) {
        days = 28; // Assuming non-leap year
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    // Display number of days in the month
    printf("\n\n\t Number of days in the month : %d", days);

}

