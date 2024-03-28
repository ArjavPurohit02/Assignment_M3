/*WAP to input the week number and print week day*/


#include <stdio.h>

 main() {
    int weekNumber;

    // Input week number
    printf("\n\n\t Enter week number (1-7) : ");
    scanf("%d", &weekNumber);

    // Print weekday based on week number
    switch (weekNumber) {
        case 1:
            printf("\n\n\t Weekday : Sunday");
            break;
        case 2:
            printf("\n\n\t Weekday : Monday");
            break;
        case 3:
            printf("\n\n\t Weekday : Tuesday");
            break;
        case 4:
            printf("\n\n\t Weekday : Wednesday");
            break;
        case 5:
            printf("\n\n\t Weekday : Thursday");
            break;
        case 6:
            printf("\n\n\t Weekday : Friday");
            break;
        case 7:
            printf("\n\n\t Weekday : Saturday");
            break;
        default:
            printf("\n\n\t Invalid week number entered.");
            break;
    }

}
