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
	int a = 0;
	int b = 1;
	while (a + b * 5 < n) {
		a += b * 5;
		b *= 2;
	}
	int x = (n - 1 - a) / b;
	if (x == 0) cout << "Sheldon";
	else if (x == 1) cout << "Leonard";
	else if (x == 2) cout << "Penny";
	else if (x == 3) cout << "Rajesh";
	else if (x == 4) cout << "Howard";
}
