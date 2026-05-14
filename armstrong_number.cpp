#include <bits/stdc++.h>

using namespace std;
bool isArmstrong(int n) {
    int k = to_string(n).length();
    int dup = n;
    int sum = 0;
    while (n > 0) {
        sum += pow(n%10, k);
        n /= 10;
    }
    if (dup == sum) {
        return true;
    }
    else {
        return false;
    }

}
    

