#include <ctype.h>
#include <stdio.h>

int main() {
    char unit;
    float temp, convert;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        convert = (temp * 9 / 5) + 32;
        printf("\nConvert Celsius to Fahrenheit: %.2f\n", convert);
    } else if (unit == 'F') {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        convert = (temp - 32) * 5 / 9;
        printf("\nConvert Fahrenheit to Celsius: %.2f\n", convert);
    } else {
        printf("\nOnly enter correct values or C or F\n");
    }
    return 0;
}
