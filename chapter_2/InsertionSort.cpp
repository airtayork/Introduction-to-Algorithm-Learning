//
// Created by moyo on 06/03/2018.
//
#include <iostream>
#include "InsertionSort.h"

int* InsertionSort::insertionSort(int *rawArr, int size) {

    for (int i = 1; i < size; i++) {

        int key = rawArr[i];

        int j = i - 1;

        while (j >= 0 && rawArr[j] > key) {
            rawArr[j + 1] = rawArr[j];
            j --;
        }

        rawArr[j + 1] = key;


        for (int k = 0; k < size; k++) {
            std::cout << rawArr[k];
        }
        std::cout << std::endl;

    }

    return rawArr;
}