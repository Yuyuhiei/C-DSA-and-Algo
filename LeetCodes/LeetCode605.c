#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0;

    //Traversing the flowerbed array
    for (int i = 0; i < flowerbedSize; ++i){
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)){
            flowerbed[i] = 1;
            count++;
            i++;
        }
    }
    if (count >= n)
        return true;
    else
        return false;
}

int main(){
    int arr[] = {0,0,1,0,0};
    int n = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    bool result = canPlaceFlowers(arr, size, n);

    if (result == true)
        printf("true");
    else
        printf("false");
    return 0;
}
