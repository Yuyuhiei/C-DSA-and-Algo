//There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
//
//Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
//
//Note that multiple kids can have the greatest number of candies.

#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    for (int i = 0; i < candiesSize; i++) {
        result[i] = true; // Initialize to true

        int totalCandies = candies[i] + extraCandies;

        for (int j = 0; j < candiesSize; j++) {
            if (totalCandies < candies[j]) {
                result[i] = false;
                break; // break out of inner loop since we found a candies value greater than totalCandies
            }
        }
    }
    return result;
}

int main() {
    int candiesSize = 5;
    int extraCandies = 2;
    int candies[] = {1, 2, 5, 2, 1};

    int returnSize;
    bool* result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);

    for (int i = 0; i < candiesSize; i++) {
        printf("%d", result[i]);
    }

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}

// Test Driver in main:
/*int main(){
    bool result[5];
    int candiesSize = 5;
    int totalCandies[candiesSize];
    int extraCandies = 2;
    int candies[] = {1, 2, 5, 2, 1};

    for(int i = 0; i < candiesSize; i++){
        totalCandies[i] = candies[i] + extraCandies;
        for(int j = 0; j < candiesSize; j++){
            if(totalCandies[i] >= candies[j]){
                result[i] = true;
            }
            else{
                result[i] = false;
                break; //break out of inner loop since we found a candies value greater than totalCandies
            }

        }

    }
    for(int i = 0; i < candiesSize; i++){
        printf("%d", result[i]);
    }
} */