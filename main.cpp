#include <iostream>
#include "main.h"
#include "value_checks.h"

int main() {
    double num1;
    double num2;
    double evaluated_value;
    char operation_type;
    std::cout<< "Welcome to the calculator" << std::endl;
    std::cout << "enter first number : " << std::endl;
    std::cin >> num1;
    std::cout << "enter operator" << std::endl;
    std::cin >> operation_type;
    std::cout<< "enter second number : " << std::endl;
    std::cin >> num2;
    evaluated_value = evaluate(num1, num2, operation_type);

    std::cout << "The evaluated value is equal to : " << evaluated_value << std::endl;
}