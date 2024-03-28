/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */


#include <stdio.h>

main() {
    int i, num, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    printf("\n\n\t Enter 10 numbers : ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);

        // Check if number is even or odd
        if (num % 2 == 0) {
            evenCount++;
            sumEven += num;
        } else {
            oddCount++;
            sumOdd += num;
        }
    }

    // Display results
    printf("\n\n\t Number of even numbers : %d", evenCount);
    printf("\n\n\t Number of odd numbers : %d", oddCount);
    printf("\n\n\t Sum of even numbers : %d", sumEven);
    printf("\n\n\t Sum of odd numbers : %d", sumOdd);
}
