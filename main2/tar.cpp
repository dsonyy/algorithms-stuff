#include <iostream>
using namespace std;

int main() {
	int n;
	long long p, q;
	cin >> n;
	while (n > 0) {
		cin >> p >> q;
		
		long long start = 0;
		long long end = 1000000;
		long long x;
		while (end >= start) {
			x = (start + end) / 2;

			if (x*x*x + p*x == q) {
				break;
			}
			else if (x*x*x + p*x > q) {
				end = x - 1;
			}
			else {
				start = x + 1;
			}
		}
		
		if (x*x*x + p*x != q) cout << "NIE\n";
		else cout << x << "\n";
		n--;
	}
	
	
	return 0;
}