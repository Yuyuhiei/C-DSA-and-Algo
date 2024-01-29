#include <iostream>
using namespace std;

int main(){
    int number, q, rem, result=0, fact=1;
    cout << "Enter a number: ";
    cin >> number;

    q = number;
        while(q!=0){
            rem = q%10;
            for(int i = 1; i <= rem; i++){
                fact *= i;
            }
            result += fact;
            fact = 1;
            q = q/10;
        }
        if (result == number)
            cout << number << " is a strong number";
        else
            cout << number << " is not a strong number";
}