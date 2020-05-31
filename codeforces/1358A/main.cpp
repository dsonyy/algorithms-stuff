#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 1 && b % 2 == 1) cout << (a * b + 1) / 2 << "\n";
        else cout << a * b / 2 << "\n";
    }
}