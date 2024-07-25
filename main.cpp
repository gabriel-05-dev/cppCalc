#include <iostream>

double add(double num1, double num2);
double subtract(double num1, double num2);
double divide(double num1, double num2);
double multiple(double num1, double num2);

//func declarations

int main() {
    double num1;
    double num2;
    char operation_type;
    std::cout<< "Welcome to the calculator" << std::endl;
    std::cout << "enter first number : " << std::endl;
    std::cin >> num1;
    std::cout << "enter operator" << std::endl;
    std::cin >> operation_type;
    std::cout<< "enter second number : " << std::endl;
    std::cin >> num2;
}

double add(double num1, double num2) {
    return num1+num2;
}

double subtract(double num1, double num2) {
    return num1-num2;
}

double divide(double num1, double num2) {
    if(num2 < 0) {
        std::cout<< "invalid" << std::endl;
    } else {
        return num1/num2;
    }
}

double multiple(double num1, double num2) {
    return num1*num2;
}