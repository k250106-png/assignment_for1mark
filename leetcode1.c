#include <stdio.h>
#include <stdlib.h>
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (!result) return NULL;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0)
            result[i] = 0;
        else
            result[i] = 1;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    *returnSize = numsSize;
    return result;
}

