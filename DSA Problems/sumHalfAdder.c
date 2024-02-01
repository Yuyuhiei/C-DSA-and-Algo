#include <stdio.h>

int main(){
    int sum, carry, a, b;
    printf("Enter two numbers: ");
    scanf_s("%d %d", &a, &b);

    while (b != 0){
        sum = a ^ b;
        carry = (a&b) << 1;
        a = sum;
        b = carry;
    }

    printf("Sum = %d", a);
    return 0;
}
