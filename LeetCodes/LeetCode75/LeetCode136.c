//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//
//You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int x = 0;
    for(int i = 0; i < numsSize; i++){
        x = x ^ nums[i];
    }
    return x;
}

int main(){
    int array[] = {2,2,7, 2, 3};
    int size = 3;
    printf("%d", singleNumber(array, size));
}

