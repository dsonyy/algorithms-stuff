#include <iostream>
#include <algorithm>
using namespace std;

int pow(int a, int b) {
	if (b == 1) return a;
	else if (b % 2) return pow(a, b - 1) * a % 10000;
	else {
		int s = pow(a, b / 2) % 10000;
		return s * s % 10000;
	}
	
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		cout << pow(a+1, b) % 10000 << "\n";
	}
	
	return 0;
}