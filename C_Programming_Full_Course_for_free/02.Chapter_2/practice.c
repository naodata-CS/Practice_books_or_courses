#include <stdio.h>

int main() {
    float first_number, second_number, calculation;
    char operation;
    printf("Enter the symbol for operation you want to do (+,-,*,/) : ");
    scanf("%c", &operation);
    printf("Enter the first number: ");
    scanf("%f", &first_number);
    printf("Enter the second number: ");
    scanf("%f", &second_number);
    switch (operation) {
    case '+':
        calculation = first_number + second_number;
        printf("The result is %.2f\n", calculation);
        break;
    case '-':
        calculation = first_number - second_number;
        printf("The result is %.2f\n", calculation);
        break;

    case '*':
        calculation = first_number * second_number;
        printf("The result is %.2f\n", calculation);
        break;

    case '/':
        calculation = first_number / second_number;
        printf("The result is %.2f\n", calculation);
        break;
    }
    return 0;
}
