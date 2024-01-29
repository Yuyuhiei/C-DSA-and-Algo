#include <iostream>
using namespace std;

int factorial(int n){
    if( n ==0 || n ==1)
        return 1;
    else
        return (n*factorial(n-1));
}

int main(){
    int number, r, result = 0;
    cout << "Enter a number: ";
    cin >> number;

    int q = number;
        while(q != 0){
            r = q % 10;
            result += factorial(r);
            q = q / 10;
        }
        if(result == number)
            cout << number << " is a strong number";
        else
            cout << number << " is not a strong number";
}


