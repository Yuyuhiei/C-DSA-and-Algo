#include <iostream>
using namespace std;

int main(){
    int x = 0, y = 0;

    cout << "Enter the two numbers you want to add: ";
    cin >> x >> y;

    if (x > 0)
        for(int i = 0; i < x; i++)
            y++;


    else if (x < 0)
        for(int i = 0; i < x; i++)
            y--;

    cout << "The sum of " << x << " and " << y << " is " << y;

}