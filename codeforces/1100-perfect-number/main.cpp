#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
    int a = 0;
    while (n > 0) {
        a += n % 10;
        n /= 10;
    }
    return a == 10;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;
    int i = 0, n = 18;
    while (i < k) {
        if (isPerfect(++n)) i++;
    }
    cout << n;
}