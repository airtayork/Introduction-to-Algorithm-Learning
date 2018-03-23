//
// Created by moyo on 22/03/2018.
//

#include "QuickSort.h"

int QuickSort::partition(int *arr, int start, int end) {

    int x = arr[end];

    int i = start - 1;

    for (int j = start; j < end; ++j) {
        if (arr[j] <= x) {
            i = i + 1;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    arr[end] = arr[i+1];
    arr[i+1] = x;

    return i + 1;

}


void QuickSort::quickSort(int *arr, int start, int end) {
    if (end > start) {
        int q = partition(arr, start, end);

        quickSort(arr, start, q - 1);
        quickSort(arr, q + 1, end);
    }
}





