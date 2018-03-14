//
// Created by moyo on 14/03/2018.
//

#ifndef INTRODUCTION_TO_ALGORITHM_LEARNING_MAXIMUMSUBARRAY_H
#define INTRODUCTION_TO_ALGORITHM_LEARNING_MAXIMUMSUBARRAY_H


class Result {
public:

    Result(int low, int high, int sum);

    int low;
    int high;
    int sum;
};

class MaximumSubarray {

public:

    Result maximumSubarray(const int* array, int low, int high);

    Result maximumCrossSubarray(const int* array, int low, int mid, int high);

};


#endif //INTRODUCTION_TO_ALGORITHM_LEARNING_MAXIMUMSUBARRAY_H
