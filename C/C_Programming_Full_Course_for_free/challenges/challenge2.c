#include <stdio.h>

int main() {
    float a, b, c;
    printf("Ingrese primero el valor de A: ");
    scanf("%f", &a);
    printf("Ingrese el valor de B: ");
    scanf("%f", &b);
    c = b;
    b = a;
    a = c;
    printf("El valor de A es: %.2f y de B es: %.2f\n", a, b);
    return 0;
}
