#include <stdio.h>
#include <math.h>

int main(){
int x;
    int i, val1, count=0;
    printf("Please enter a number (positive only): ");
    scanf_s("%d", &x);

    val1 = ceil(sqrt(x));

    for(i = 2; i <= val1; i++){
        if(x % i == 0)
            count = 1;
    }

    if ((count == 0) || x == 2 || x == 3)
        printf("%d is a prime number", x);
    else
        printf("%d is not a prime number", x);
}