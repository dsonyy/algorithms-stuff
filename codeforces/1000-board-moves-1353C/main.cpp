#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		n = n / 2 + 1;
		long long score = 0;
		while (--n > 0) score += n*n*8;
		cout << score << "\n";
	}
}