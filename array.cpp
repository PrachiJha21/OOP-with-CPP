#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    for(i=0; i<numsSize; i++){
        for(j=i+1; i<=numsSize; j++){
            if (nums[i]+nums[j] == target){
            printf("[%d,%d]", i,j);
            }
        }
    }    
}

int main(){
    int num[10], size, target_sum, returnSize=1, valid_answer[3];
    //num[10]= {1,3,4};
    twoSum(num,10,7,&returnSize);
    return 0;
}