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

map<ll,int> f(ll n) {
	map<ll,int> s;
	ll k = 2;
	while (n > 1 && k * k <= n) {
		while (n % k == 0) {
			s[k]++;
			n /= k;
		}
		k++;
	}
	if (n > 1) s[n]++;
	return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

	ll n;
	cin >> n;
	auto s = f(n);
	int cnt = 0;
	for (auto a : s) {
		int i = 1;
		while ((i*(i+1)/2) <= a.second) 
			i++;
		cnt += i - 1;
	}
	cout << cnt << endl;
}
