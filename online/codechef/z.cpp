#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(i,n) for(ll i=0;i<n;i++)
#define f1(i,n) for(ll i=1;i<=n;i++)
#define io                                                                     \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace boost::multiprecision;
using namespace std;
const ll N = 1e6;
void solve() {
  ll n;
  cin>>n;
  vector<ll>b(n);
  vector<ll>a(n);
  int cnt=0;
  f0(i,n){
    cin>>b[i];
    if(b[i]<0){
      cnt++;
    }
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