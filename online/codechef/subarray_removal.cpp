// Prabhoot
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> //int1024_t n
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define iv         \
  ll n = 0;        \
  cin >> n;        \
  vector<ll> v(n); \
  f0(i, n) cin >> v[i];
#define io                      \
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
  f0(i, n)
  {
    ll temp;
    cin >> temp;
    v[temp - 1] = i;
  }
  ll k = 1;
  ll high;
  ll low;
  ll ans;
  while (k < n)
  {
    if (k == 1)
    {
      high = v[n - k];
      low = v[n - k];
      ans = 1;
      k++;
      continue;
    }
    if (low>0&&(--low == v[n - k]))
    {
      ans++;
      k++;
      low--;
      break;
    }
    else if (high<n-1&&(++high == v[n - k]))
    {
      ans++;
      k++;
      high++;
      break;
    }
    cout<<low<<" "<<high<<endl;
  }
  cout<<ans<<endl;
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