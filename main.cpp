#include <iostream>
#include "main.h"
#include "operator_check.h"

double runProgram();

int main() {
    runProgram();
    return 0;
}

double runProgram() {
        double num1;
        double num2;
        double evaluated_value;
        char operation_type;
        std::cout<< " !!! welcome to the calculator !!! \n \n " << std::endl;
        num1 = get_number();
        operation_type = get_operator();
        num2 = get_number();

        if (check_char_type(operation_type) == true) {
            evaluated_value = evaluate(num1,num2,operation_type);
            std::cout << "computer says answer is :  " << evaluated_value << std::endl; 
            return evaluated_value;
        } else {
            std::cout << "computer says : \"check your operator\" " << std::endl;
        }
    return 0;
}
    
