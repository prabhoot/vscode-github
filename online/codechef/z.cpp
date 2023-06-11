// Prabhoot
#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>  //int1024_t n
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define iv           \
    ll n = 0;        \
    cin >> n;        \
    vector<ll> v(n); \
    f0(i, n) cin >> v[i];
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace boost::multiprecision;
using namespace std;
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b) {
    if (a.first != b.first)
        return (a.first > b.first);
    else
        return (a.second < b.second);
}
const ll N = 1e6;
void solve() {
    int n, k, l;
    cin >> n >> k >> l;
    vector<pair<int, int>> v;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (b == l) {
            v.push_back(make_pair(a, b));
        }
    }
    sort(v.begin(), v.end(), sortbyCond);
    int sum = 0;
    int i = 0;
    if (k <= v.size()) {
        while (k--) {
            sum += v[i].first;
            i++;
        }
        cout << sum << endl;
    } else {
        cout << "-1\n";
    }
}
int main() {
    io;
    int t{};
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}