#include "Reverser.h"
#include <cmath>
#include <iostream>

int Reverser::reverseDigit(int value) {

    if(value < 0) {
        return -1;
    }
    
    if (value == 0) {
            return value;
    }


    return ((value%10) * pow(10, (int)log10(value)) + reverseDigit(value/10));

}


std::string Reverser::reverseString(std::string value) {
    if(value == "") {
        return "";
    }
    char newChar = value[value.length()-1];
    value.erase(value.length()-1);
    return newChar + reverseString(value);
}