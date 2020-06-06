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

	int t;
	cin >> t;
	wh(t) {
		ll a, b;
		cin >> a >> b;
		if (a == b) cout << 0 << endl;
		else if (a > b) {
			int cnt = 0;
			while (a > b) {
				if (a % 8 == 0 && a / 8 >= b) {
					cnt++;
					a /= 8;
				}
				else if (a % 4 == 0 && a / 4 >= b) {
					cnt++;
					a /= 4;
				}
				else if (a % 2 == 0 && a / 2 >= b) {
					cnt++;
					a /= 2;
				}
				else {
					cnt = -1;
					break;
				}
			}
			cout << cnt << endl;
		}
		else if (a < b) {
			int cnt = 0;
			while (a < b) {
				if (a * 8 <= b) {
					cnt++;
					a *= 8;
				}
				else if (a * 4 <= b) {
					cnt++;
					a *= 4;
				}
				else if (a * 2 <= b) {
					cnt++;
					a *= 2;
				}
				else {
					cnt = -1;
					break;
				}
			}
			cout << cnt << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}
