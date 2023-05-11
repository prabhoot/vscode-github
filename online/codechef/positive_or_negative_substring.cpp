// Jai Mahakal
// Author: Prabhoot
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace boost::multiprecision;
using namespace std;
const ll N = 1e6;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll neg = 0;
    ll pos = 0;
    f0(i, n)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            neg+=(i+1);
        }    
    }
    ll total_substring = (n * (n + 1)) / 2;
    pos = (total_substring - neg);
    cout << abs(pos - neg) << endl;
}
int main()
{
    io;
    int t{};
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}