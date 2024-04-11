#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int value) {
    if(list.empty()) {
        return false;
    }

    int midpoint = list.size()/2;

    if(list.at(midpoint) == value) {
        return true;
    }

    if(list.at(midpoint) > value) {
        std::vector<int> firstHalf(list.begin(), list.begin() + midpoint-1);
        return search(firstHalf, value);
    }

    if(list.at(midpoint) < value) {
        std::vector<int> secondHalf(list.begin() + midpoint+1, list.end());
        return search(secondHalf, value);
    }

    return false;
}