#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    /* char name[25]; // bytes
    printf("What is yor name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    int dni_number;
    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    getchar();
    printf("You are %d years old\n", age);
    printf("Write your DNI number\n");
    scanf("%d",&dni_number);
    printf("Welcome: %d\n", dni_number);
    return 0;
    */
    double a, b, c;
    printf("Enter the legs:\n");
    scanf("%lf", &a);
    getchar();
    scanf("%lf", &b);
    c = sqrt((a*a)+(b*b));
    printf("Hypotenuse is: %lf\n", c);
    return 0;
}
