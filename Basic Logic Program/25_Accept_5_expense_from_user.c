//Accept 5 expense from user and find average of expense


#include <stdio.h>

 main() {
    float expense, totalExpense = 0;
    int count = 0;

    // Input and accumulate expenses using a while loop
    while (count < 5) {
        printf("\n\n\t Enter expense %d : ", count + 1);
        scanf("%f", &expense);
        totalExpense += expense;
        count++;
    }

    // Calculate and display average expense
    printf("\n\n\t Average Expense: %.2f", totalExpense / 5);

}

