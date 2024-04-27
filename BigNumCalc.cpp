#include "BigNumCalc.h"

std::list<int> bigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char digitChar : numString) {
        int digit = digitChar - '0';
        result.push_back(digit);
    }
    return result;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        int sum = carry;
        if (it1 != num1.rend()) {
            sum += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            sum += *it2;
            ++it2;
        }
        result.push_front(sum % 10);
        carry = sum / 10;
    }
    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend()) {
        int diff = *it1 - borrow;
        if (it2 != num2.rend()) {
            diff -= *it2;
            ++it2;
        }
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.push_front(diff);
        ++it1;
    }
    // Remove leading zeros
    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }
    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result(num1.size() + num2.size(), 0);
    auto it1 = num1.rbegin();
    int shift = 0;
    while (it1 != num1.rend()) {
        int carry = 0;
        auto it2 = num2.rbegin();
        auto itResult = std::next(result.rbegin(), shift);
        while (it2 != num2.rend()) {
            int prod = *it1 * *it2 + *itResult + carry;
            *itResult = prod % 10;
            carry = prod / 10;
            ++it2;
            ++itResult;
        }
        if (carry > 0) {
            *itResult += carry;
        }
        ++it1;
        ++shift;
    }
    // Remove leading zeros
    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }
    return result;
}
