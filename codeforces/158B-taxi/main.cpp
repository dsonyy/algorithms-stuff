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
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	vi v(n);
	for0(i, n) {
		cin >> v[i];
		if (v[i] == 4) a4++;
		else if (v[i] == 3) a3++;
		else if (v[i] == 2) a2++;
		else a1++;
	}
	int c = a4;
	if (a1 <= a3) a1 = 0;
	else a1 -= a3;
	c += a3;
	c += (a1 + a2*2 + 3) / 4;
	cout << c;
}
