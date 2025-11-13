/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++) {
        result[j++] = nums[i];
        result[j++] = nums[i + n];
    }
    return result;
}
