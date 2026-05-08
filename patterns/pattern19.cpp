#include <iostream>
using namespace std;

int main() {
    // 5 rows
    for (int i = 0 ; i < 5 ; i++) {
        // 5* 
        for (int j = 0 ; j < 5-i ; j++) {
            cout << "*";
        }
        // spaces
        for (int k = 0 ; k < 2*i ; k++) {
            cout << " ";
        }
        // again stars
        for (int l = 0 ; l < 5-i ; l++) {
            cout << "*";
        }
        cout << endl;
    }
    // same algorithm in reverse order
    for (int i = 0; i < 5 ; i++) {
        // stars
        for (int j = 0 ; j <= i ; j++) {
            cout << "*";
        }
        // spaces
        for (int k = 0 ; k < 8-2*i ; k++) {
            cout << " ";
        }
        // again stars
        for (int l = 0; l <= i ; l++) {
            cout << "*";
        }
        cout << endl;
    }
}