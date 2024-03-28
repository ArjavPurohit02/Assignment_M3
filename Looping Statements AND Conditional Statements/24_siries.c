/*(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)*/


#include <stdio.h>

 main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of the series (1*1) + (2*2) + (3*3) + ... + (%d*%d): %d\n", n, n, sum);
}
