#define _CRT_SECURE_NO_WARNINGS
#ifndef _MSC_VER
#include <bits/stdc++.h>
#else
#include <__msvc_all_public_headers.hpp>
#endif
using namespace std;

#define for0(i, n)      for (int i = 0; i < (int)(n); ++i)
#define for1(i, n)      for (int i = 1; i <= (int)(n); ++i)
#define forc(i, l, r)   for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i, n)	    for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n)     for (int i = (int)(n); i >= 1; --i)
#define wh(t)           while (t--)
	
#define endl "\n"

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

int f(int h) {
	return 3 * (h * (h + 1) / 2) - h;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

	int t;
	cin >> t;
	vector<int> q(t);
	int mx = 0;
	for0(i, t) {
		cin >> q[i];
		if (q[i] > mx) mx = q[i];
	}

	vector<int> v;
	int last = 0;
	int i = 0;
	while (last <= mx) {
		v.push_back(f(i + 1));
		last = v[i];
		i++;
	}
	
	for (auto a : q) {
		int cnt = 0;
		forr0(i, v.size()) {
			if (v[i] <= a) {
				a -= v[i];
				cnt++;
				i++;
			}
		}
		cout << cnt << endl;
	}
}
