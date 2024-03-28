/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/

#include <stdio.h>

main() {
    char operator;
    float num1, num2, result;

    // Input operator and two numbers
    printf("\n\n\t Enter operator (+, -, *, /, %%) : ");
    scanf("%c", &operator);

    printf("\n\n\t Enter two numbers : ");
    scanf("%f %f", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n\n\t Sum : %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n\n\t Difference: %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n\n\t Product: %.2f", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n\n\t Quotient : %.2f", result);
            } else {
                printf("\n\n\t Error: Division by zero");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Modulo: %.2f\n", result);
            } else {
                printf("\n\n\t Error: Modulo by zero");
            }
            break;
        default:
            printf("\n\n\t Error: Invalid operator");
    }

}

