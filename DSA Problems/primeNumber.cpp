
#include <iostream>
#include <valarray>

using namespace std;

int main(){
    int i, x, val1, count=0;
    cout << "Enter a number: ";
    cin >> x;

    val1 = ceil(sqrt(x));

    for(i = 2; i <= val1; i++){
        if(x % i == 0)
            count = 1;
    }

    if ((count == 0) || x == 1 || x == 3){
        cout << x << " is a prime number";
    }
    else
        cout << x  << " is not a prime number";
}

