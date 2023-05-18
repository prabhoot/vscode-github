//Prabhoot
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>//int1024_t n
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(i,n) for(ll i=0;i<n;i++)
#define f1(i,n) for(ll i=1;i<=n;i++)
#define iv ll n=0;cin>>n;vector<ll>v(n); f0(i,n) cin>>v[i];
#define io                                                                     \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
using namespace boost::multiprecision;
using namespace std;
const ll N = 1e6;
void solve() {
   int n;
  cin>>n;
  if((n%2==0&&n%7==0)){
    cout<<"Alice\n";
  }
  else if((n%3==0&&n%9==0)){
    cout<<"Bob\n";
  }
  else{
    cout<<"Charlie\n";
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