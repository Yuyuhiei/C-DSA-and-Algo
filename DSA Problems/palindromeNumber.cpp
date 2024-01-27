#include <iostream>

using namespace std;

int main(){
    int n, result = 0, q, rem;
    cout << "Enter a number: ";
    cin >> n;

    q = n;

    while(q != 0){
        rem = q%10;
        result = result*10 + rem;
        q = q/10;

    }

    if (result == n)
        cout << "It is a palindrome";
    else
        cout << "It's not a palindrome";
    return 0;
}





