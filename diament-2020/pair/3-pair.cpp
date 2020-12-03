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


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);
#ifdef DEBUG_MODE
	// freopen("out.txt", "w", stdout);
	freopen("in.txt", "r", stdin);
	int _t = clock();
#endif
	
	int n, k;
	cin >> n >> k;
	map<int, int> a;
	for0(i, n) {
		int v;
		cin >> v;
		a[v]++;
	}

	int cnt = 0;
	bool prev = false;
	for (auto i : a) {
		auto x = a.upper_bound(i.first);
		if (x == a.end()) {
			if (prev) {
				cnt += i.second;
			}
			break;
		}

		if (x->first <= i.first + k) {
			cnt += i.second;
			prev = true;
		}
		else if (prev) {
			cnt += i.second;
			prev = false;
		}
	}

	cout << cnt << endl;
	

#ifdef DEBUG_MODE
	cerr << "\nTIME = " << clock() - _t << endl;
#endif
}
