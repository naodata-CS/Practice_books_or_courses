#include <iomanip>
#include <ios>
#include <iostream>

int main() {
    int a = 10;
    char b = 'a';
    float c = 10.13210;
    unsigned long long d = 1232132131232132132;
    double e;       // declaration
    e = 231.2321;   // assignment
    bool f = false; // bolean(true or false)
    std::string g = "Hello world!";
    std::cout << g;
    std::cout << std::fixed << std::setprecision(2) << c << '\n';
    std::cout << d << std::endl;
    return 0;
}
