#include <iostream>

bool check_char_type(char input) {
    if (input == '*' || input == '/' || input == '-' || input == '+') { 
        return true;
    } else if (input != '*' || input != '/' || input !=  '-' || input != '+' ) {
        return false;
    }
    return 0;
}