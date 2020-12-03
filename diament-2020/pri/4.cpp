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

const set<int> jk = { 7,
10,
13,
19,
23,
28,
31,
32,
44,
49,
68,
70,
79,
82,
86,
91,
94,
97,
100,
103,
109,
129,
130,
133,
139,
167,
176,
188,
190,
192,
193,
203,
208,
219,
226,
230,
236,
239,
262,
263,
280,
291,
293,
301,
302,
310,
313,
319,
320,
326,
329,
331,
338,
356,
362,
365,
367,
368,
376,
379,
383,
386,
391,
392,
397,
404,
409,
440,
446,
464,
469,
478,
487,
490,
496,
536,
556,
563,
565,
566,
617,
622,
623,
632,
635,
644,
656,
665,
673 };

bool isprime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(10);
#ifdef DEBUG_MODE
	// freopen("out.txt", "w", stdout);
	freopen("in.txt", "r", stdin);
	int _t = clock();
#endif

	int l, u, k;
	cin >> l >> u >> k;

	bool found = false;
	for (int i = l; i <= u; i++) {
		int sum = 0;
		int n = i;
		while (n > 0) {
			sum += (n % 10) * (n % 10);
			n /= 10;
		}

		if (jk.find(sum) != jk.end() && isprime(i)) {
			k--;
			if (k == 0) {
				cout << i << endl;
				found = true;
				break;
			}
		}
	}

	if (!found) cout << -1 << endl;

#ifdef DEBUG_MODE
	cerr << "\nTIME = " << clock() - _t << endl;
#endif
}
