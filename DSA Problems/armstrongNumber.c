// Armstrong Number = An Armstrong Number of order n is a number in which each digit when multiplied by itself n number of times and finally added together, results the same number.
#include <stdio.h>

int main()
{
    int number, count=0, result=0, mul=1, cnt, rem;
    printf("Enter a number: ");
    scanf_s("%d", &number);

    // getting the digit of a number
    int q = number;
    while(q != 0)
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while(q != 0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul = mul*rem;
            cnt--;
        }
        result = result+mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }

    if (result == number)
        printf("The number is an Armstrong Number");
    else
        printf("The number is not an Armstrong Number");
    return 0;
}

