#include <iostream>
using namespace std;

long long pow(long long a, long long n) {
	
	if (n == 1) return a;
	else if (n % 2) return pow(a, n - 1) * a;
	else {
		long long s = pow(a, n / 2);
		return s * s;
	}
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, n;
		cin >> a >> n;
		cout << pow(a, n) << "\n";
	}

	return 0;
}