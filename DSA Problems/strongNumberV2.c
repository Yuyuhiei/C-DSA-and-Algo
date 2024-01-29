#include <stdio.h>

int main(){
    int number, q, rem, result=0, fact=1;
    printf("Enter a number: ");
    scanf_s("%d", &number);

    q = number;
        while (q!= 0){
            rem = q % 10;
            for (int i = 1; i <= rem; i++){
                fact = fact * i;
            }
            result = result + fact;
            fact = 1;
            q = q / 10;
        }
        if (result == number)
            printf("%d is a strong number.", number);
        else
            printf("%d is not a strong number.", number);
}
