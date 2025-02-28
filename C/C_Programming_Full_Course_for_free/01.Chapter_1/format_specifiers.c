#include <stdio.h>
int main() {
    // format specifier % = defines and formats a type of data to be displayed
    //%c = character
    //%s = string
    //%f = float
    //%lf = double
    //%d = integer
    //%.1 = decimal position
    //%1 = minimum field width
    //%- = left align
    printf("Hello world\n");
    float number1 = 13.213213;
    printf("Number 1 in format float is: %.2f.\n", number1);
    return 0;
}
