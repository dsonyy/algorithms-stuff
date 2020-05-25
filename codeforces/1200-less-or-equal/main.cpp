#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n, k;
	cin >> n >> k;
	int v[n];
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v, v + n);

	if (k == 0) {
		if (v[0] > 1)
			cout << "1";
		else
			cout << "-1";
		return 0;
	}
	
	int cnt = 0;
	bool ok = true;
	for (int i = 1; i <= k; i++) {
		if (v[i] == v[i - 1] && i == k) ok = false;
		cnt++;
	}
	
	if (!ok) cout << "-1";
	else cout << v[k - 1];
}