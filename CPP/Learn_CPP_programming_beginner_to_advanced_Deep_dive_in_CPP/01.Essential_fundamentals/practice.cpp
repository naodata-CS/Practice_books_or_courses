#include <iostream>
#include <ostream>

int main() {
    float width, length, square_feet, doorways, calc_paint, price_galon,
        calc_price_paint;
    std::cout << "Enter the width of the room: " << std::endl;
    std::cin >> width;
    std::cout << "Enter the length of the room: " << std::endl;
    std::cin >> length;
    std::cout << "How many doorways you have: " << std::endl;
    std::cin >> doorways;
    square_feet = (width * length) - (14 * doorways);
    std::cout << "Area in square feet is: " << square_feet << " ft2."
              << std::endl;
    std::cout << "Enter the price of the galon: " << std::endl;
    std::cin >> price_galon;
    calc_paint = (square_feet) / 350;
    calc_price_paint = calc_paint * price_galon;
    std::cout << "Cost of the paint is: " << calc_price_paint << "$"
              << std::endl;
    return 0;
}
