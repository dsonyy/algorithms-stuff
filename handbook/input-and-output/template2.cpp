#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen(".in", "r", stdin);
    freopen(".out", "w", stdout);

    ios::sync_with_stdio(0);    
    cin.tie(0);

    int tab[10];
	int k = 0;
    while (cin >> tab[k++]) {}
	
	for (int i = 0; i < k - 1; i++)
		cout << tab[i]*tab[i] << "\n";
}
