/*. . If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/- */

#include <stdio.h>

	main() 
			{
    			int customerId, units;
    			char customerName[50];
    			float charge, totalAmount, surcharge, finalAmount;

    // Input customer details
    printf("\n\n\t Enter customer ID : ");
    scanf("%d", &customerId);

    printf("\n\n\t Enter customer name : ");
    scanf("%s", customerName);

    printf("\n\n\t Enter units consumed : ");
    scanf("%d", &units);

    // Calculate total amount based on unit consumed
    if (units <= 350) {
        charge = 1.20;
    } else if (units < 600) {
        charge = 1.50;
    } else if (units < 800) {
        charge = 1.80;
    } else {
        charge = 2.00;
    }

    totalAmount = units * charge;

    // Apply surcharge if total amount exceeds Rs. 800
    if (totalAmount > 800) {
        surcharge = totalAmount * 0.18; // 18% surcharge
        totalAmount += surcharge;
    }

    // Ensure minimum bill of Rs. 256
    if (totalAmount < 256) {
        totalAmount = 256;
    }

    // Display customer bill
    printf("\n\n\t Electricity Bill");
    printf("\n\n\t Customer ID : %d", customerId);
    printf("\n\n\t Customer Name : %s", customerName);
    printf("\n\n\t Units Consumed : %d", units);
    printf("\n\n\t Charge per unit : Rs. %.2f", charge);
    printf("\n\n\t Total Amount (before surcharge) : Rs. %.2f", totalAmount - surcharge);
    printf("\n\n\t Surcharge (18%%) : Rs. %.2f", surcharge);
    printf("\n\n\t Final Amount to be Paid : Rs. %.2f", totalAmount);

}

