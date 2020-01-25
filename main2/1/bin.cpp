#include <iostream>
#include <vector>

using namespace std;

int main() {
	int k, x, n;
	cin >> k;

	while (k > 0) {
		cin >> x >> n;
		vector<int> tab(n);
		for (int i = 0; i < n; i++) {
			cin >> tab[i];
		}
		//////////////////////////////////////
		int start = 0; 
		int end = n - 1;
		int center;
		while (end >= start) {
			center = (start + end) / 2;
			if (tab[center] == x) {
				break;
			}
			else if (tab[center] > x) 
				end = center - 1;
			else 
				start = center + 1;
		}
		if (end >= start) cout << center << endl; 
		else cout << "NIE" << endl;
		//////////////////////////////////////
		k--;
	}
	
	return 0;
}