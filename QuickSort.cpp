#include "QuickSort.h"

std::vector<int> QuickSort::quickSort(std::vector<int> list, int start, int end) {
    if (start >= end) {
        return list;
    }

    int pivot;
    if (end - start >= 2) {
        pivot = start + 2; 
    } else {
        pivot = end;
    }

    int pivot_value = list.at(pivot);
    int pivot_index = start;

    for (int i = start; i <= end; i++) {
        if (list.at(i) < pivot_value) {
           std::swap(list[i], list[pivot_index]);
           pivot_index++;
        }
    }

    std::swap(list[pivot_index], list[pivot]);

    list = quickSort(list, start, pivot_index - 1);
    list = quickSort(list, pivot_index + 1, end);

    return list;
}



std::vector<int> QuickSort::sort(std::vector<int> list) {
    if (list.empty()) {
        return list;
    }

    int start = 0;
    int end = list.size() - 1;

    return quickSort(list, start, end);
}

