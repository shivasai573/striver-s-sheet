#include <bits/stdc++.h>


using namespace std;
// algorithm 1
// vector <int> divisors(int n) {
    
//     vector <int> ans;
//     for (int i = 1; i <= n ; i++) {
//         if (n % i == 0) {
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }

vector <int> divisors(int n) {
    
    vector <int> ans;
    for (int i = 1 ; i*i <= n ; i++) {
        if (n % i == 0) {
            ans.push_back(i);
            if (i!= n/i) {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}
int main() {
    int n = 144;
    vector <int> sol = divisors(n);
    for (auto num : sol) {
        cout << num << " ";
    }
    cout << endl;

}