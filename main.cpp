#include <iostream>
#include "chapter_2/InsertionSort.h"

int main() {
    std::cout << "Hello, Algorithm!" << std::endl;

    int rawArr[] = {2, 3, 5, 1, 9, 4, 8, 7, 6};

    auto *insertionSort = new InsertionSort();
    insertionSort->insertionSort(rawArr, 9);

    return 0;
}