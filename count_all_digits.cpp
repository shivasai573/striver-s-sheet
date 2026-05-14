#include <iostream>
#include <cmath>
using namespace std;

class Solution {
    public :
    // int count_all_digits(int n) {
    //     int count = 0;
    //     if (n == 0) {
    //         return 1;
    //     }
    //     while (n != 0) {
    //         count++;
    //         n /=10 ;
    //     }
    //     return count;
    // }

    int count_all_digits(int n) {
        if (n == 0) {
            return 1;
        }
        int cnt = (int)(log10(n) + 1);
        return cnt;
    }
};

int main() {
    int n = 1234;
    Solution s;
    cout << s.count_all_digits(n) << endl;
}