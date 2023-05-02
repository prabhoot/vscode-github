#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES"
#define no cout << "NO"
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
  vector<ll> v;
  ll temp=0;
  ll sum=0;
  for(int i=0;i<n;i++){
    cin>>temp;
    v.push_back(temp);
    sum+=temp;
  }
  sort(all(v));
  ll mini=v[0];
  if(sum%2||((sum-n)%2==0&& mini%2)){
    cout<<"CHEF\n";
  }
  else{
    cout<<"CHEFINA\n";
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