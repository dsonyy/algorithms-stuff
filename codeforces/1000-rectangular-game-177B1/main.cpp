#include <bits/stdc++.h>
using namespace std;

int divider(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return i;
	}
	return n;
}

int main() {
	ios::sync_with_stdio(0);    
    cin.tie(0);
	int n, score;
	cin >> n;
	score = n;
	while (n > 1) {
		int a = divider(n);
		int b = n / a;
		n = b;
		score += n;
	}	
	cout << score;
}