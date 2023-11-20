// Prabhoot
// #include <boost/multiprecision/cpp_int.hpp>//int1024_t n
// using namespace boost::multiprecision;
#include <bits/stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
#define iv            \
    int n = 0;        \
    cin >> n;         \
    vector<int> v(n); \
    f(i, n) cin >> v[i];
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
void solve() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "1" << endl;
    else {
        a = ceil(a / c);
        b = ceil(b / c);
        cout << a + b << endl;
    }
}
signed main() {
    io;
    solve();
    return 0;
}