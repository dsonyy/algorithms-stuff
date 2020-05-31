#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int i = 0, c = 1, pc = 0;
        for (; i < n; i++) {
            if (pc == 0) {
                if (v[i] <= c) c++;
                else pc = c + 1;
            }
            else {
                if (v[i] <= pc) {
                    c = pc + 1;
                    pc = 0;
                }
                else {
                    pc++;
                }
            }
        }
        cout << c << "\n";
    }
}