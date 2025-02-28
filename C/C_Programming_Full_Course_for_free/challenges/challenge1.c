#include <stdio.h>

int main() {
    int numero, operacion;
    printf("Ingresar el numero que debemos conocer si es par o impar: ");
    scanf("%d", &numero);
    operacion = numero % 2;
    if (operacion != 0) {
        printf("El numero %d es impar\n", numero);
    } else {
        printf("El numero %d es par\n", numero);
    }
    return 0;
}
