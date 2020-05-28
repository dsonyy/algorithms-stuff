#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	if (b.compare(0, a.size(), a) == 0 && a.size() + 1 == b.size())
		cout << "Yes";
	else
		cout << "No";
}