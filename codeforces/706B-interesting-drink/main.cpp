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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

	//freopen("out.txt", "w", stdout);
	//freopen("in.txt", "r", stdin);

	int n;
	cin >> n;
	vector<int> v(n);
	for0(i, n) cin >> v[i];
	int m;
	cin >> m;
	vector<int> w(m);
	for0(i, m) cin >> w[i];

	sort(v.begin(), v.end());
	map<int, int> s;
	for0(i, m) {
		auto f = s.find(w[i]);
		if (f != s.end()) {
			cout << f->second << endl;
			continue;
		}

		auto it = upper_bound(v.begin(), v.end(), w[i]);
		cout << it - v.begin() << endl;
		s[w[i]] = it - v.begin();
	}
}
