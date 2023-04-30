#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define pb push_back
#define pob pop_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(), (x).end()
#define fr(n) for (ll i = 0; i < n; i++)
#define ic(input)                                                              \
  ll input;                                                                    \
  cin >> input;
#define ff first
#define ss second
#define io                                                                     \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace boost::multiprecision;
#define vll vector<ll>
using namespace std;
const ll N = 1e6;
void solve() {
  ll x;
  cin >> x;
  if (x == 1) {
    cout << "-1\n";
    return;
  }
  ll q, r;
  q = (x-1) / N;
  r = (x-1) % N;
  if (q == 0) {
    cout << "1 1 " << x - 1 << endl;
  } else {
    cout << q << " " << N << " " << r+1 << endl;
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