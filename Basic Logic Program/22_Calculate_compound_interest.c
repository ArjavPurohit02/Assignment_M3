/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include <stdio.h>
#include <math.h>

 main() 
 {
    float principal, rate, time, amount, compoundInterest;

    // Input principal amount, annual interest rate, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate amount using the compound interest formula
    amount = principal * pow(1 + rate / 100, time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Display the results
    printf("Amount after %0.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);

}

