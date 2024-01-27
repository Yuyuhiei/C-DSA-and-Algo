// Palindrome - a number or a word or a phrase if read backwards gives the same number or a word or a phrase as it is being read forward

#include <stdio.h>

int main(){
    int n, result=0, q, rem;
    printf("Enter a number: ");
    scanf_s("%d", &n);

    q = n;

    while(q!=0){
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }

    if (result == n)
        printf("It's a palindrome");
    else
        printf("It's not a palindrome");
    return 0;
}
