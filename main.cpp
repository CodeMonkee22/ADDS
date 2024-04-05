#include "BubbleSort.h"
#include <iostream>
#include <vector>

int main() {

    std::vector<int> vector = {2, 4, 6, 1, 3, 7, 5};

    Sort* bubbleSort = new BubbleSort();

    vector = bubbleSort->sort(vector);

    for(int i = 0; i < vector.size(); i++) {
            std::cout << vector[i] << " "; 
    }
    std::cout << std::endl; 




    return 0;
}