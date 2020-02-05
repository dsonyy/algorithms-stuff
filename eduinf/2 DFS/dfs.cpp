#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited;
int n;

void dfs(const vector<vector<bool>> & g, int s) {
	visited[s] = true;
	for (int i = 0; i < n; i++) {
		if (g[s][i] && !visited[i])  {
			cout << s << " -> " << i << endl;
			dfs(g, i);
		}
	}
}

int main() {
	cin >> n;
	vector<vector<bool>> g(n, vector<bool>(n));
	while (true) {
		int a, b;
		cin >> a >> b;
		if (!cin) break;
		g[a][b] = true;
	}
	
	visited.resize(n);
	
	dfs(g, 0);
	
	return 0;
}