#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>


int main() {

    std::vector<int> list = {1, 3, 5, 4, -5, 100, 7777, 2014};

    QuickSort quickSort;

    std::vector<int> sortedList = quickSort.sort(list);

    RecursiveBinarySearch binarySearch;

    if(binarySearch.search(sortedList,100) == true) {
        std::cout << "true ";
    } 
    else {
        std::cout << "false ";
    }

    for(int i = 0; i < sortedList.size(); i++) {
        std::cout << sortedList.at(i) << " ";
    }

    std::cout << std::endl;


    return 0;
}