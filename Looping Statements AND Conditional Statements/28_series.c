/*1 2 3 6 9 18 27 54...*/


#include <stdio.h>

main() {
    int n;
    
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        } else {
            printf("%d ", i * 3);
        }
    }

    printf("\n");

}
