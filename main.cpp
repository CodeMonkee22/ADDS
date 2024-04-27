#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <sstream>


int main() {
     
    std::string input;
    std::getline(std::cin, input);

    std::vector<int> list;
    std::stringstream  ss(input);

    int num;

    while (ss >> num) {
        list.push_back(num);
    } 

    QuickSort quickSort;

    std::vector<int> sortedList = quickSort.sort(list);

    RecursiveBinarySearch binarySearch;

     if(binarySearch.search(sortedList, 1) == true) {
         std::cout << "true ";
     } 
     else {
         std::cout << "false ";
     }

    for(long unsigned int i = 0; i < sortedList.size(); i++) {
        std::cout << sortedList.at(i) << " ";
    }

    std::cout << std::endl;

    return 0;
}