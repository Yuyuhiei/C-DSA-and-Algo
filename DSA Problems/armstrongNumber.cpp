
#include <iostream>
using namespace std;

int main()
{
    int number, count=0, result=0, mul=1, cnt, rem;
    cout << "Enter a number: ";
    cin >> number;

    int q = number;
    while (q!=0){
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while(q!= 0)
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
        cout << "It is an Armstrong Number";
    else
        cout << "It is not an Armstrong Number";
    return 0;
}
