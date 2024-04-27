#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int value) {
    if(list.empty()) {
        return false;
    }

    long unsigned int midpoint = list.size() / 2;

    if(list[midpoint] == value) {
        return true;
    }

    if(list[midpoint] > value) {
        if (midpoint == 0) 
            return false;
        std::vector<int> firstHalf(list.begin(), list.begin() + midpoint);
        return search(firstHalf, value);
    }

    if(list[midpoint] < value) {
        if (midpoint == list.size() - 1)
            return false;
        std::vector<int> secondHalf(list.begin() + midpoint, list.end());
        return search(secondHalf, value);
    }

    return false;
}
