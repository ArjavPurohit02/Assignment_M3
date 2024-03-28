/*Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

#include <stdio.h>

	main() 
			{
    int units;
    float totalBill, surcharge = 0.20; // 20% surcharge

    // Input electricity units
    printf("\n\n\t Enter electricity units : ");
    scanf("%d", &units);

    // Calculate total bill based on unit charges and conditions
    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add surcharge
    totalBill += totalBill * surcharge;

    // Display total electricity bill
    printf("\n\n\t Total electricity bill: Rs. %.2f", totalBill);

}

