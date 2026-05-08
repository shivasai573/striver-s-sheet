#include <iostream>
using namespace std;

int main() {
    char c = 'E';
    for (int i = 0 ; i < 5 ; i++) {
        
        for (int j = 0 ; j <= i ; j++) {
            cout << c++;
        }
        cout << endl;
        c = c - (i+2);
    }
}