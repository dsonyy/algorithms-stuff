#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        long long b;
        cin >> b;
        if (b == 0) {
            cout << 0 << "\n";
            return 0;
        }
        a.push_back(b);
    }
 
    long long r = 1;
    for (auto x : a) {
        if (r <= 1000000000000000000 / x) {
            r *= x;
        }
        else {
            cout << -1 << "\n";
            return 0;
        }
    }
    cout << r << "\n";
}
