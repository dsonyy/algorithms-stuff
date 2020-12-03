#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, e = 1;
    cin >> k;
    vector<vector<int>> g(k, vector<int>(k));
    while (true) {
        int a, b;
        cin >> a >> b;
        if (!cin) break;
        g[a][b] = e;
        g[b][a] = e++;
    }

    for (auto i : g) {
        for (auto j : i)
            if (j > 0) cout << "1";
			else cout << "-";
        cout << endl;
    }
    cout << endl;
    
    vector<vector<bool>> ge(e - 1, vector<bool>(e - 1));
    for (int v = 0; v < k; v++) {
        for (int u = 0; u < k; u++) {
            if (g[v][u] > 0) {
                for (int w = 0; w < k; w++) {
                    if (g[w][u] > 0 && w != v) {
						ge[g[w][u] - 1][g[v][u] - 1] = 1;
						ge[g[v][u] - 1][g[w][u] - 1] = 1;
					}
                        
                }
            }
        }    
    }
    
    
    for (auto i : ge) {
        for (auto j : i)
            if (j > 0) cout << "1";
			else cout << "-";
        cout << endl;
    }
    
    return 0;
}
