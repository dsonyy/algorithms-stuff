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
	
	int i = 0;
	int j = 1;
	long long cnt = 0;
	cuksy[0] = false;
	do {
		if (j == n || cuksy[j] == false) {
			fill(cuksy.begin(), cuksy.end(), true);
			cnt += (j - i + 1)*(j - i + 2)/2;
			i = j++;
		}
		else {
			cuksy[j] = false;
			j++;
		}
	} while (j <= n);

	cout << cnt << "\n";

	return 0;
}