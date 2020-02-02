#include <iostream>
#include <algorithm>
using namespace std;

int nwd(int a, int b) {
	
	if (a < b) swap(a, b);
	if (b == 0) return a;
	return nwd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	
	int k;
	cin >> k;
	while (k-- > 0) {
		int n, d;
		cin >> n >> d;
		cout << n / nwd(n, d) << "\n";
	}

	return 0;
}