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

set<int> dz(int n) {
	set<int> s;
	auto x = sqrt(n);
	for (int i = 1; i <= x; i++) {
		if (n % i == 0) {
			if (i <= n / 2) s.insert(i);
			if (n / i <= n / 2) s.insert(n / i);
		}
	}
	return s;
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
	
	int n, m;
	cin >> n >> m;
	vector<vi> a(n, vi(n));
	for0(i, n) {
		for0(j, n) {
			cin >> a[i][j];
		}
	}

	int r = 0;
	for0(i, m) {
		char ch;
		cin >> ch;
		if (ch == 'q' || ch == 'Q') {
			int x, y;
			cin >> x >> y;
			if (r == 0) {
				cout << a[x][y] << endl;
			}
			else if (r == 1) {
				cout << a[n - y - 1][x] << endl;
			}
			else if (r == 2) {
				cout << a[n - x - 1][n - y - 1] << endl;
			}
			else if (r == 3) {
				cout << a[y][n - x - 1] << endl;
			}
		}
		else if (ch == 'a' || ch == 'A') {
			int d;
			cin >> d;
			d = (d / 90) % 4;
			r = (r + d) % 4;
		}
		else if (ch == 'u' || ch == 'U') {
			int x, y, v;
			cin >> x >> y >> v;
			a[x][y] = v;
		}
	}



#ifdef DEBUG_MODE
	cerr << "\nTIME = " << clock() - _t << endl;
#endif
}
