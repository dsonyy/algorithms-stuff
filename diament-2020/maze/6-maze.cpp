#define _CRT_SECURE_NO_WARNINGS
#ifndef _MSC_VER
#include <bits/stdc++.h>
#else
#include <__msvc_all_public_headers.hpp>
#endif
using namespace std;

#define A				first
#define B				second
#define pb				push_back
#define mp				make_pair
#define sz(a)			int((a).size())
#define sqr(a)			((a) * (a))
#define for0(i, n)      for (int i = 0; i < (int)(n); ++i)
#define for1(i, n)      for (int i = 1; i <= (int)(n); ++i)
#define forc(i, l, r)   for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i, n)	    for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n)     for (int i = (int)(n); i >= 1; --i)
#define wh              int t; cin >> t; while (t--)
#define endl "\n"
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

void sklad(vector<vector<int>> & M, int X, int Y, int id) {
	queue<ii> q({ mp(X, Y) });
	int w = M.size(), h = M[0].size();

	while (!q.empty()) {
		auto i = q.front();
		q.pop();

		int x = i.first, y = i.second;

		M[x][y] = id;
		if (x > 0 && M[x - 1][y] == 0) {
			q.push(mp(x - 1, y));
			M[x - 1][y] = id;
		}
		if (x < w - 1 && M[x + 1][y] == 0) {
			q.push(mp(x + 1, y));
			M[x + 1][y] = id;
		}
		if (y > 0 && M[x][y - 1] == 0) {
			q.push(mp(x, y - 1));
			M[x][y - 1] = id;
		}
		if (y < h - 1 && M[x][y + 1] == 0) {
			q.push(mp(x, y + 1));
			M[x][y + 1] = id;
		}

		//cout << endl;
		//for0(i, h) {
		//	for0(j, w) {
		//		if (M[j][i] == -1) cout << "#";
		//		else cout << M[j][i];
		//	}
		//	cout << endl;
		//}
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);
#ifdef DEBUG_MODE
	// freopen("out.txt", "w", stdout);
	freopen("in.txt", "r", stdin);
	int _t = clock();
#endif
	
	int y, x;
	cin >> y >> x;
	vector<vector<int>> M(y, vi(x));

	for0(i, y) {
		for0(j, x) {
			char ch;
			cin >> ch;
			if (ch == '.') M[i][j] = 0;
			else M[i][j] = -1;
		}
	}

	sklad(M, 0, 0, 1);
	sklad(M, y - 1, x - 1, 2);

	int cnt = 0;
	for0(i, x) {
		for0(j, y) {
			if (M[j][i] == -1) {
				bool s = false, e = false;

				if (j > 0 && M[j - 1][i] == 1) s = true;
				if (j < y - 1 && M[j + 1][i] == 1) s = true;
				if (i > 0 && M[j][i - 1] == 1) s = true;
				if (i < x - 1 && M[j][i + 1] == 1) s = true;

				if (j > 0 && M[j - 1][i] == 2) e = true;
				if (j < y - 1 && M[j + 1][i] == 2) e = true;
				if (i > 0 && M[j][i - 1] == 2) e = true;
				if (i < x - 1 && M[j][i + 1] == 2) e = true;

				if (s && e) cnt++;
			}
		}
	}

	cout << cnt << endl;

#ifdef DEBUG_MODE
	cerr << "\nTIME = " << clock() - _t << endl;
#endif
}
