#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, score, adv = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a <= 0) break;
        else if (i == k) score = a;
        else if (i > k && a != score) break;
        adv++;
    }
    cout << adv;
}