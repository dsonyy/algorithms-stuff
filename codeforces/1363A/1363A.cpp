#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a = 0, b = 0;
		while (n--) {
			int q;
			cin >> q;
			if (q % 2) a++;
			else b++;
		}

		if (x <= a) {
			if (x % 2) {
				cout << "Yes\n";
			}
			else {
				if (b > 0) cout << "Yes\n";
				else cout << "No\n";
			}
		}
		else {
			if (a == 0) cout << "No\n";
			else if (a % 2) {
				cout << "Yes\n";
			}
			else {
				if (a - 1 + b >= x) cout << "Yes\n";
				else cout << "No\n";
			}
		}
	}
}