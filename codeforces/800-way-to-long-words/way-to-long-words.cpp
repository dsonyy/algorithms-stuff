#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);    
    cin.tie(0);
	
	int n;
	cin >> n;
	while (n--) {
		string word;
		cin >> word;
		if (word.size() <= 10) cout << word << "\n";
		else cout << word[0] << word.size() - 2 << word[word.size() - 1] << "\n";
	}
}