#include "BubbleSort.h"
#include <iostream>

std::vector<int> BubbleSort::sort(std::vector<int> list) {


    for(unsigned int i = list.size()-1; i > 1; i--) {
        for(unsigned int j = 0;  j < i; j++) {
            if(list.at(j) > list.at(j+1)) {
                std::swap(list[j], list[j+1]); 
            }
        }
    }
    return list;
}