#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), [](auto ch){ return tolower(ch); });
    for (auto ch : {'a', 'e', 'i', 'o', 'u', 'y'})
        str.erase(remove(str.begin(), str.end(), ch), str.end());
    for (auto ch : str)
        cout << '.' << ch;
}