#define _CRT_SECURE_NO_WARNINGS
#ifndef _MSC_VER
#include <bits/stdc++.h>
#else
#include <__msvc_all_public_headers.hpp>
#endif
using namespace std;

#define for0(i, n)      for (int i = 0; i < (int)(n); ++i)
#define for1(i, n)      for (ll i = 1; i <= (ll)(n); ++i)
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

ll f(ll a) {
	ll mx = -1, mn = 10;
	ll c = a;
	while (c >= 1) {
		if (c % 10 > mx)mx = c % 10;
		if (c % 10 < mn)mn = c % 10;
		c /= 10;
	}
	return mn * mx;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

	int t;
	cin >> t;
	wh(t) {
		ll a, b;
		cin >> a >> b;
		ll c = a;
		for1(i, b-1) {
			ll x = f(c);
			if (x == 0) break;
			c += x;
		}
		cout << c << endl;
	}
}
