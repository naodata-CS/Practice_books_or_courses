#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    if (age > 17) {
        std::cout << "You are an adult" << std::endl;
    } else {
        std::cout << "You are a kid" << std::endl;
    }
    return 0;
}
