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
int check(char a, char b) {
    if (a == 'R' && b == 'S')
        return 1;
    else if (a == 'S' && b == 'P')
        return 1;
    else if (a == 'P' && b == 'R')
        return 1;
    else if (a == b)
        return -1;
    else
        return 0;
}
void solve() {
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    int count = 0;
    int d = 0;
    f(i, n) {
        if (check(s1[i], s2[i])) {
            count++;
        } else if (check(s1[i], s2[i])) {
            d++;
        }
    }
    int ans = n-count - d;
    int r = 0;
    while (count <= ans) {
        count++;
        ans--;
        r++;
    }
    cout << r << endl;
}
signed main() {
    io;
    int t{};
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}