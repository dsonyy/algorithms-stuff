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
	map<int, int> s, d;
	for0(i, n) {
		int a;
		cin >> a;
		s[a]++;
		d[a]++;
	}
	for0(i, n-1) {
		int a;
		cin >> a;
		map<int, int>::iterator it = s.find(a);
		if (it->first == a && it->second > 1) it->second--;
		else if (it->first == a) s.erase(it);
	}
	for0(i, n - 2) {
		int a;
		cin >> a;
		map<int, int>::iterator it = d.find(a);
		if (it->first == a && it->second > 1) it->second--;
		else if (it->first == a) d.erase(it);
	}

	if (d.size() == 1) cout << d.begin()->first << " " << d.begin()->first;
	else {
		cout << s.begin()->first << " ";
		if (s.begin()->first == d.begin()->first) cout << (++d.begin())->first;
		else cout << d.begin()->first;
	}
}
