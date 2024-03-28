/*WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50*/

#include <stdio.h>

 main() {
    int i;
    printf("\n\n\t  numbers between 1 to 50 (inclusive) : ");
    for (i = 1; i <= 50; i++) 
    {
        if(i%2 == 0) // Check if 'i' is even
        {
            printf("\n%d ", i); // Print 'i' if it's even
        }
    }
    printf("\n");
}
