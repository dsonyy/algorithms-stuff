#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<bool> cuksy(m, true);
	vector<int> tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	

	cout << cnt << "\n";

	return 0;
}