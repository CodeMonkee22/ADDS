#include "Reverser.h"

int Reverser::reverseDigit(int value, int reversedNum) {

    if(value < 0) {
        return -1;
    }
    
    if (value == 0) {
            return reversedNum;
    }
    
    int lastDigit = value % 10;
    reversedNum = (reversedNum * 10) + lastDigit;

    return reverseDigit(value/10, reversedNum);

}


std::string Reverser::reverseString(std::string value) {
    if(value == "") {
        return "";
    }
    char newChar = value[value.length()-1];
    value.erase(value.length()-1);
    return newChar + reverseString(value);
}