#include <bits/stdc++.h>
using namespace std;

queue<int> q;

void search(const vector< vector<int> >& v, vector<int>& d) {
    int i = q.front();
    q.pop();
    for (const auto& a : v[i]) {
        if (d[a] == -1) {
            d[a] = i;
            q.push(a);
        }
    }
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector< vector<int> > v(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a - 1].push_back(b - 1);
        v[b - 1].push_back(a - 1);
    }

    vector<int> d(n, -1);
    d[0] = 0;
    q.push(0);
    while (!q.empty())
        search(v, d);

    cout << "Yes\n";
    for (int i = 1; i < n; i++) cout << d[i] + 1 << endl;
}