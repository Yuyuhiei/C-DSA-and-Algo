#include <stdio.h>

int factorial(int n){
    if ((n == 0) || (n == 1)) {
        return 1;
    }
    else
        return (n * factorial(n-1));
}

int main(){
    int number, r, result = 0;
    printf("Enter a number:  ");
    scanf_s("%d", &number);

    int q = number;

        while(q!=0){
            r = q%10;
            result += factorial(r);
            q = q/10;
        }

        if (result == number)
            printf("%d is a strong number", number);
        else
            printf("%d is not a strong number", number);

}
