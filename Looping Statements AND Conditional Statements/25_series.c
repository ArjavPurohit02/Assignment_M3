/*. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/


#include <stdio.h>

 main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += i * (n + 1 - i);
    }

    printf("Sum of the series: %d\n", sum);
}
