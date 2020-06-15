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

	int t;
	cin >> t;
	wh(t) {
		ll n, x;
		cin >> n >> x;
		vector<ll> v(n);
		for0(i, n) cin >> v[i];
		sort(v.begin(), v.end());
		vector<ll> s(n+1);
		forr0(i, n) {
			s[i] = s[i + 1] + v[i];
		}
		ll r = 0;
		for (ll i = 0; i <= n-1; i++) {
			if (s[i] / (n - i) >= x) {
				r = n - i;
				for0(j, i) {
					if (v[j] >= x) r++;
				}
				break;
			}
		}
		cout << r << endl;
	}
}
