#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {3, 2, 4};
    int target = 5;
    int returnSize;
    
    int* result = twoSum(nums, 3, target, &returnSize);

    if (result != NULL) {
        printf("Output: [%d, %d]\n", result[0], result[1]);
        free(result); // free the malloc'ed array
    } else {
        printf("No solution found.\n");
    }

    return 0;
}