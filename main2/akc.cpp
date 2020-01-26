#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, q;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		int left = 0;
		int right = n - 1;
		while (right > left) {
			int center = (left + right) / 2;
			if (a[center] >= x) {
				right = center;
			} else {
				left = center + 1;
			}
		}

		if (a[right] != x) {
			cout << 0 << "\n";
			continue;
		}

		int begin = right;		
		left = 0; 
		right = n - 1;
		while (right > left) {
			int center = (left + right + 1) / 2;
			if (a[center] <= x) {
				left = center;
			} else {
				right = center - 1;
			}
		}
		cout << right - begin + 1 << "\n";
	}
	
	
	
	return 0;
}