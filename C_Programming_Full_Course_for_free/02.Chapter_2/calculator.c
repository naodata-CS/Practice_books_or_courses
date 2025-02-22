#include <stdio.h>

int main() {
    char operation;
    double first_number, second_number, calculus;
    printf("\nEnter the operator do you need to calculus (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter first number: ");
    scanf("%lf", &first_number);
    printf("Enter second number: ");
    scanf("%lf", &second_number);
    switch (operation) {
    case '+':
        calculus = first_number + second_number;
        printf("The result is: %.2lf\n", calculus);
        break;
    case '-':
        calculus = first_number - second_number;
        printf("The result is: %.2lf\n", calculus);
        break;
    case '*':
        calculus = first_number * second_number;
        printf("The result is: %.2lf\n", calculus);
        break;
    case '/':
        calculus = first_number / second_number;
        printf("The result is: %.2lf\n", calculus);
        break;
    default:
        printf("\nEnter one of the correct operations\n");
    }
    return 0;
}
