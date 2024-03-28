/*Make A Pattern*/


#include <stdio.h>

main() {
    int rows, i, j;
    char ch = 'A'; // Starting alphabet

    printf("\n\n\t Enter the number of rows for the pattern : ");
    scanf("%d", &rows);

    i = 1;
    while (i <= rows) {
        j = 1;
        while (j <= i) {
            printf("%c ", ch);
            ch++;
            j++;
        }
        printf("\n");
        i++;
    }

}
