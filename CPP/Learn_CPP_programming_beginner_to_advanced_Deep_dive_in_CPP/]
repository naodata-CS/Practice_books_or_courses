#include <iostream>
#include <string>

int main() {
    std::string code, full_name;
    float salary, total_sales, comission_rate, income;
    std::cout << "Enter your code: ";
    std::cin >> code;
    std::cin.ignore();
    std::cout << "Enter your full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Welcome " << full_name << "!" << std::endl;
    std::cout << "Enter your salary: ";
    std::cin >> salary;
    std::cout << "Enter your comission rate in percent without %: ";
    std::cin >> comission_rate;
    std::cout << "Enter your total sales: ";
    std::cin >> total_sales;
    income = salary + (total_sales * (comission_rate / 100));
    std::cout << "Your total income is: " << income << std::endl;

    return 0;
}
