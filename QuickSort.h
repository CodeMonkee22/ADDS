#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__
#include <vector>
#include "Sort.h"

class QuickSort : public Sort {

public:
     private:
     std::vector<int> quickSort(std::vector<int> list, int start, int end);
     public:
     std::vector<int> sort(std::vector<int> list);
};



#endif