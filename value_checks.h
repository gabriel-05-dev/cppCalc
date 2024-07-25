#include <iostream>

bool check_double_type(double number) {
    if (sizeof(number) == 8) {
        std::cout << "valid" << std::endl;
        return true;
    } else {
        std::cout << "invalid digit entered" << std::endl;
        return false;
    }
    return 0;
}

bool check_char_type(char operator_char) {
    if (sizeof(operator_char) == 1){ 
        std::cout << "valud operator entered" << std::endl;
        return true;
    } else {
        std::cout << "invalid operator" << std::endl;
        return false;
    }
    return 0;
}


bool check_output_type(double evaluated_expression) {
    if (sizeof(evaluated_expression) == 8){ 
        std::cout << "valud output" << std::endl;
        return true;
    } else {
        std::cout << "invalid output" << std::endl;
        return false;
    }
    return 0;
}

