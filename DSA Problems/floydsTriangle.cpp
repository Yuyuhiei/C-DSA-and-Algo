//
// Created by Lauvigne on 03/02/2024.
//

#include <iostream>
using namespace std;

int main(){
    int i, j, rows, n=1;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            cout << n << " ";
            n++;
        }
        cout << "\n";
    }
    return 0;
}
