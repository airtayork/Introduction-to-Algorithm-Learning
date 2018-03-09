#include <iostream>
#include "chapter_2/InsertionSort.h"
#include "chapter_2/MergeSort.h"

int main() {
    std::cout << "Hello, Algorithm!" << std::endl;

    int rawArr[] = {6, 3, 1, 0, 9, 7, 5, 8, 2, 4, 10, 11, 12, 13, 14};

//    auto *insertionSort = new InsertionSort();
//    insertionSort->insertionSort(rawArr, 9);

    for (int i = 0; i < 15; i++) {
        std::cout << rawArr[i];
    }
    std::cout << std::endl;

    MergeSort mergeSort;
    mergeSort.mergeSort(rawArr, 0, 14);

    for (int i = 0; i < 15; i++) {
        std::cout << rawArr[i];
    }
    std::cout << std::endl;

    return 0;
}