// #include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// #define ll long long
// #define all(x) (x).begin(), (x).end()
// #define yes cout << "YES"
// #define no cout << "NO"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace boost::multiprecision;
// using namespace std;
// const ll N = 1e6;
// void solve()
// {
//     ll n;
//     cin >> n;
//     ll a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     ll count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if((a[j]-a[i])!=(a[i]-a[j])){
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;
// }
// int main()
// {
//     io;
//     int t{};
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
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
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<ll,ll>m;
    for(auto i:a){
        m[i]++;
    }
    ll total_subarrays=(n*(n-1))/2;
    ll stable_subarray=0;
    for(auto i:m){
        stable_subarray+=(i.second*(i.second-1))/2;
    }
    total_subarrays-=stable_subarray;
    cout<<total_subarrays<<endl;

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