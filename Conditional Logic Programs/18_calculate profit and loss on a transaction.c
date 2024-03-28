/*. Write a C program to calculate profit and loss on a transaction*/


#include <stdio.h>

 main() {
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("\n\n\t Enter cost price : ");
    scanf("%f", &costPrice);

    printf("\n\n\t Enter selling price : ");
    scanf("%f", &sellingPrice);

    // Calculate profit and loss
    profit = sellingPrice - costPrice;
    loss = costPrice - sellingPrice;

    // Check if it's a profit or a loss
    if (profit > 0) {
        printf("\n\n\t Profit: $%.2f", profit);
    } else if (loss > 0) {
        printf("\n\n\t Loss: $%.2f", loss);
    } else {
        printf("\n\n\t No profit, no loss.");
    }

}

