#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << k + (k-1)/(n-1) << "\n";
	}
}