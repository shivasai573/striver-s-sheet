#include <iostream>
using namespace std;

int main() {
    for (int i = 0 ; i < 5 ; i++) {
        char c = 'A';
        for (int j = 0 ; j < 5-i ; j++) {
            cout << c++;
        }
        cout << endl;
    }
}