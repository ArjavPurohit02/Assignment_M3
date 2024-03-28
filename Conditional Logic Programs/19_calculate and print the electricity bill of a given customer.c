/*Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/


#include <stdio.h>

	main() 
			{
    			int customerId, units;
    			char customerName[50];
    			float charge, totalAmount;

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

    // Display customer bill
    printf("\n\n\t Electricity Bill");
    printf("\n\n\t Customer ID: %d", customerId);
    printf("\n\n\t Customer Name : %s", customerName);
    printf("\n\n\t Units Consumed : %d", units);
    printf("\n\n\t Charge per unit : $%.2f", charge);
    printf("\n\n\t Total Amount : $%.2f", totalAmount);

}
