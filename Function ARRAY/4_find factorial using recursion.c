/*WAP to find factorial using recursion*/


#include <stdio.h>

// Recursive function to calculate the factorial of a number
long long int factorial(int n) {
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

main() {
    int num;
    printf("\n\n\t Enter a positive integer : ");
    scanf("%d",&num);
    printf("\n\n\t Factorial of %d = %lld", num, factorial(num));
}
