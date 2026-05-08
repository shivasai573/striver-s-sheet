#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5 ; i++) {
        // stars
        for (int j = 0; j <= i ; j++) {
            cout << "*";
        }
        // spaces
        for (int k = 0; k < 8-2*i ; k++) {
            cout << " ";
        }
        // stars
        for (int l = 0 ; l <= i ; l++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 4 ; i++) {
        //stars
        for (int j = 0 ; j < 4-i ; j++) {
            cout << "*";
        }
        // spaces
        for (int k = 0; k < 2*(i+1) ; k++) {
            cout << " ";
        }
        // stars
        for (int l = 0; l < 4-i ; l++) {
            cout << "*";
        }
        cout << endl;
    }
}