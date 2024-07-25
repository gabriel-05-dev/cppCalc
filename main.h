#include <iostream>

double add(double num1, double num2);
double subtract(double num1, double num2);
double divide(double num1, double num2);
double multiply(double num1, double num2);
double evaluate(double num1, double num2, char operation_type);

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
        return  num1/num2;
    }
    return 0;
}

double multiply(double num1, double num2) {
    return num1*num2;
}

double evaluate(double num1, double num2, char operation_type) {
    double evaluated_value;
    switch(operation_type) {
        case '+':
        evaluated_value = add(num1, num2);
        break;

        case '-':
        evaluated_value = subtract(num1, num2);
        break;

        case '/':
        evaluated_value = divide(num1, num2);
        break;

        case '*':
        evaluated_value = multiply(num1, num2);
        break;

        default:
        std::cout<< "invalid or no operator found" << std::endl;

    }
    return evaluated_value;
}