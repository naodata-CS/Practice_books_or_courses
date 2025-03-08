#include <iostream>
int main() {
    int numero, operacion;
    std::cout << "Vamos a comprobar si un numero es par o impar.\n";
    std::cout << "Ingresa un numero:\n";
    std::cin >> numero;
    operacion = numero % 2;

    if (operacion == 0) {
        std::cout << "El numero: " << numero << " es par.\n";
    } else {
        std::cout << "El numero: " << numero << " es impar\n";
    }
    return 0;
}
