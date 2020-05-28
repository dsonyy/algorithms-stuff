#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	
	int sum = 0;
	for (int i = 0; i < a && k > 0; i++) {
		sum += 1;
		k--;
	}
	
	for (int i = 0; i < b && k > 0; i++) {
		sum += 0;
		k--;
	}
	
	for (int i = 0; i < c && k > 0; i++) {
		sum -= 1;
		k--;
	}
	
	cout << sum;
}