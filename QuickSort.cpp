#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high){
    if (low < high){
        int pivot = partition(list, low, high);
        quickSort(list, low, pivot - 1);
        quickSort(list, pivot + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if (list[j] < pivot){
            ++i;
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i+1], list[high]);
    return i + 1;
}
