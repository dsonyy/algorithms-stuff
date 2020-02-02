#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int mmmax = 0;
vector<bool> maxV;

bool valid(const vector<vector<char>> & tab, vector<bool> v, int n) {
	for (int i = 0; i < n; i++) {
		if (!v[i]) continue;

		for (int j = 0; j < n; j++) {
			if (tab[i][j] == '1' && v[j])
				return false;
		}
	}
	auto cnt = count(v.begin(), v.end(), true);
	if (cnt >= mmmax) {
		mmmax = cnt;
		maxV = v;
	}
	return true;
}

void check(const vector<vector<char>>& tab, vector<bool> v, int n, int current) {
	if (current == n) {
		valid(tab, v, n);
	}
	else {
		v[current] = false;
		check(tab, v, n, current + 1);

		v[current] = true;
		check(tab, v, n, current + 1);
	}
}

int main() {
	int n;
	cin >> n;
	vector<vector<char>> tab(n, vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tab[i][j];
		}
	}

	check(tab, vector<bool>(n), n, 0);
	cout << mmmax << endl;
	for (int i = 0; i < n; i++) {
		if (maxV[i]) cout << i + 1 << " ";
	}

	return 0;
}