#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	
	long long k, cnt = 0, mn = 0;
	cin >> k;
	while (k-- > 0) {
		long long x;
		cin >> x;
		
		if (x == 0) mn++;
		else cnt += mn;
	}
	cout << cnt << "\n";
	return 0;
}