#include <stdio.h>

int main() {
    char grade;
    printf("\nEnter a letter grade from A-D or F\t");
    scanf("%c", &grade);

    switch (grade) {
    case 'A':
        printf("You did perfect!\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("YOU FAILED\n");
        break;
    default:
        printf("Please enter only valid grades\n");
    }
}
