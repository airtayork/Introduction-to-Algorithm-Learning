//
// Created by moyo on 14/03/2018.
//

#include <iostream>
#include "MaximumSubarray.h"


Result::Result(int low, int high, int sum) : low(low), high(high), sum(sum) {}


Result MaximumSubarray::maximumSubarray(const int *array, int low, int high) {
    if (low == high) {
        return Result(low, high, array[low]);
    }
    else {
        int mid = (low + high) / 2;
        int leftLow = low;
        int leftHigh = mid;
        int rightLow = mid + 1;
        int rightHigh = high;

        Result resultLeft = maximumSubarray(array, leftLow, leftHigh);
        Result resultRight = maximumSubarray(array, rightLow, rightHigh);
        Result resultCross = maximumCrossSubarray(array, low, mid, high);

        int leftSum = 0;
        for (int i = resultLeft.low; i < resultLeft.high + 1; i++) {
            leftSum += array[i];
        }
        resultLeft.sum = leftSum;

        int rightSum = 0;
        for (int i = resultRight.low; i < resultRight.high + 1; i++) {
            rightSum += array[i];
        }
        resultRight.sum = rightSum;

        if (resultLeft.sum >= resultRight.sum && resultLeft.sum >= resultCross.sum) {
            std::cout << "left: " << resultLeft.sum << " low: " << resultLeft.low << " high: " << resultLeft.high << std::endl;

            return resultLeft;
        }
        else if (resultRight.sum >= resultLeft.sum && resultRight.sum >= resultCross.sum) {
            std::cout << "right: " << resultRight.sum << " low: " << resultRight.low << " high: " << resultRight.high << std::endl;

            return resultRight;
        }
        else {
            std::cout << "cross: " << resultCross.sum << " low: " << resultCross.low << " high: " << resultCross.high << std::endl;

            return resultCross;
        }

    }
}




Result MaximumSubarray::maximumCrossSubarray(const int *array, int low, int mid, int high) {
    int leftSum = 0;
    int tempLeftSum = 0;
    int maxLeft = 0;
    for (int i = mid; i >= low; i--) {
        tempLeftSum = tempLeftSum + array[i];
        if (tempLeftSum > leftSum || i == mid) {
            leftSum = tempLeftSum;
            maxLeft = i;
        }
    }

    int rightSum = 0;
    int tempRightSum = 0;
    int maxRight = 0;
    for (int j = mid + 1; j <= high; j++) {
        tempRightSum = tempRightSum + array[j];
        if (tempRightSum > rightSum || j == mid + 1) {
            rightSum = tempRightSum;
            maxRight = j;
        }
    }

    return Result(maxLeft, maxRight, leftSum + rightSum);
}
