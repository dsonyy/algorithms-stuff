#include <iostream>
#include <vector>
#include <deque>
using namespace std;


void bfs(const vector<vector<int>> & g, vector<bool> & visited, deque<int> & toSearch) {
	while (!toSearch.empty()) {
		int c = toSearch.front();
		toSearch.pop_front();
		for (int i : g[c]) {
			if (!visited[i]) {
				cout << c << " -> " << i << endl;
				visited[i] = true;
				toSearch.push_back(i);
			}		
		}

	}
}

int main() {
	int k;
	cin >> k;
	vector<vector<int>> g(k);
	vector<bool> visited(k);
	while (true) {
		int a, b;
		cin >> a >> b;
		if (!cin) break;
		g[a].push_back(b);
	}
	
	deque<int> toVisit;
	toVisit.push_back(0);
	visited[0] = true;
	
	bfs(g, visited, toVisit);
	
	
	return 0;
}