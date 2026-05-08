#include <iostream>
using namespace std;

int main() {
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 3-i ; j++) {
            cout << " ";
        }
        char c = 'A';
        for (int k = 0 ; k <= i ; k++) {
            cout << c++;
        }
        c = c - 2;
        for (int l = 0 ; l < i ; l++) {
            cout << c--;
        }
        cout << endl;
    }
}