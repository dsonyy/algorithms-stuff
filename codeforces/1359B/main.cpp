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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<string> v(n);
        int a = 0, b = 0;
        for0(i, n) {
            string s;
            cin >> s;
            for0(j, m) if (s[j] == '.') a++;
            int c = 0;
            for1(j, m) {
                if (s[j] == '.' && s[j - 1] == '.') {
                    c++;
                    j++;
                }
            }
            b += c;
            a -= c*2;
        }
        if (y < x * 2) {
            cout << a * x + b * y << endl;
        }
        else {
            cout << (a + b * 2) * x << endl;
        }
    }
}
