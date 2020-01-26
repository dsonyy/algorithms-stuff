#include <iostream>
#include <algorithm>
using namespace std;

int nwd(int a, int b) {
	
	if (a < b) swap(a, b);
	
	if (b == 0) return a;
	else return nwd(b, a - b);
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		
		cout << nwd(a, b) << "\n";
	}

	return 0;
}