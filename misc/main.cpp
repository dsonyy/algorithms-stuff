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

// najwiekszy wspolny dzielnik - algorytm Euklidesa
int nwd(int a, int b) {
	while (b) {
		int c = b;
		b = a % b;
		a = c;
	}
	return a;
}

// najmniejsza wspolna wielokrotnosc
int nww(int a, int b) {
	return a * b / nwd(a, b);
}

// rozklad na czynniki pierwsze
set<int> dz(int n) {
	set<int> s;
	auto x = sqrt(n);
	for (int i = 1; i <= x; i++) {
		if (n % i == 0) {
			s.insert(i);
			s.insert(n / i);
		}
	}
	return s;
}

// rozklad na czynniki pierwsze
vector<int> dz2(int n) {
	vector<int> v;
	auto x = sqrt(n);
	for (int i = 1; i <= x; i++) {
		if (n % i == 0) {
			v.push_back(i);
			if (i * i != n) v.push_back(n / i);
		}
	}
	return v;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

#ifdef DEBUG_MODE
	//freopen("out.txt", "w", stdout);
	freopen("in.txt", "r", stdin);
#endif
	auto a = sqrt(35);
	auto s = (6 == a);
	wh {
		int a;
		cin >> a;
		cout << a << endl;
	}
}

