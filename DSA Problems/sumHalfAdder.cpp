//
// Created by Lauvigne on 03/02/2024.
//

#include <iostream>
using namespace std;

int main(){
    int sum, carry, a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0){
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    cout << "Sum: " << a;
    return 0;
}


