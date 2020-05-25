#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);    
    cin.tie(0);
	string a;
	cin >> a;
	if (a.find("1111111") != string::npos || a.find("0000000") != string::npos) cout << "YES";
	else cout << "NO";
}