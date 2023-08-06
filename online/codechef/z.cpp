// Prabhoot
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>  //int1024_t n
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(n) for (ll i = 0; i < n; i++)
#define f1(n) for (ll i = 1; i <= n; i++)
#define iv           \
    ll n = 0;        \
    cin >> n;        \
    vector<ll> v(n); \
    f0(n) cin >> v[i];
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace boost::multiprecision;
using namespace std;
const ll N = 1e6;
void solve() {
    iv;
    ll sum = 0;
    for (auto i : v) {
        sum += i;
    }
    sort(all(v));
    cout << sum << " ";
    for (ll i = 0; i < n - 1; i++) {
        ll temp = sum - v[i];
        sum -= v[i];
            cout << temp << " ";
    }
    cout << endl;
}
int main() {
    io;
    ll t{};
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}