#include <stdio.h>

int main() {
    // Algorithm is an step to step program that provide a solution
    float a, b;
    printf("Ingresa los dos numeros que quieres comparar\n");
    scanf("%f", &a);
    scanf("%f", &b);
    if (a > b) {
        printf("A es mayor que B\n");
    } else if (b > a) {
        printf("B es mayor que A\n");
    } else {
        printf("Ambos son iguales\n");
    }
    return 0;
}
