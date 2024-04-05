#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__
#include <vector>
#include "Sort.h"

class Quicksort : public Sort {

public:
     std::vector<int> sort(std::vector<int> list);
     std::vector<int> quickSort(std::vector<int> list, int start, int end);
};



#endif