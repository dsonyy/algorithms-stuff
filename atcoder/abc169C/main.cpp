int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long a, b;
    cin >> a >> b;
    char c;
    cin >> c;
    int d;
    cin >> d;
    b = b * 100 + d;
    long long e = (a * b) / 100;
    cout << e;
}