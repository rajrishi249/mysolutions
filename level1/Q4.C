#include <stdio.h>

int main() {
    float operand1, operand2;
    char op;

    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    float result;

    switch (op) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}

