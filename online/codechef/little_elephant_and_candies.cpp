#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll>v;
    ll temp;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
        sum+=temp;
    }
    if(c>=sum){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
int main() {
  int t{};
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}