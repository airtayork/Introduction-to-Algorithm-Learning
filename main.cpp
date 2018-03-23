#include <iostream>
#include "chapter_2/InsertionSort.h"
#include "chapter_2/MergeSort.h"
#include "chapter_4/MaximumSubarray.h"
#include "chapter_7/QuickSort.h"

int main() {
    std::cout << "Hello, Algorithm!" << std::endl;

    int rawArr[] = {6, 3, 1, 0, 9, 7, 5, 8, 2, 4};
//    int rawArr[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};

//    auto *insertionSort = new InsertionSort();
//    insertionSort->insertionSort(rawArr, 9);

    QuickSort quickSort;
    quickSort.quickSort(rawArr, 0, 9);

    for (int i = 0; i < 10; i++) {
        std::cout << rawArr[i] << " ";
    }
    std::cout << std::endl;

//    MaximumSubarray maximumSubarray;
//    maximumSubarray.maximumSubarray(rawArr, 0, 15);

//    MergeSort mergeSort;
//    mergeSort.mergeSort(rawArr, 0, 14);
//
//    for (int i = 0; i < 15; i++) {
//        std::cout << rawArr[i];
//    }
//    std::cout << std::endl;

    return 0;
}