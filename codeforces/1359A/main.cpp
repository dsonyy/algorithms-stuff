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
#define forr0(i, n)     for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n)     for (int i = (int)(n); i >= 1; --i)

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
    while (t--) {
        int n, m, k;
	    cin >> n >> m >> k;
	    if (m <= n/k) cout << m << endl;
	    else {
		    int pc = n/k;
		    m -= pc;
            if (k - 1 >= m) cout << pc - 1 << endl;
		    else cout << pc - m/(k-1) - (m%(k-1)+k-2)/(k-1)<< endl;
		}
    }
}
