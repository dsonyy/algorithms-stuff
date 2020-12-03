#include <iostream>
#include <vector>
using namespace std;

int main() {
	int k;
	cin >> k;
	vector<vector<bool>> g(k, vector<bool>(k));
	while (true) {
		int a, b;
		cin >> a >> b;
		if (!cin) break;
		g[a][b] = true;
		g[b][a] = true;
	}
	
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			cout << g[i][j] << " ";
		}
		cout << endl;
	}	
	
	cout << "    ||" << endl;
	cout << "    \\/" << endl;
	
	auto g2 = g;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			if (!g[i][j]) 
				continue;
			for (int l = 0; l < k; l++) {
				if (g[l][j] && l != i) {
					g2[i][l] = true;
				}
			}		
		}
	}
	
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			cout << g2[i][j] << " ";
		}
		cout << endl;
	}		
	
	return 0;
}