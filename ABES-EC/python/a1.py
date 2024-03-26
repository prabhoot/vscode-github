#include <bits/stdc++.h>
//Prabhoot
//#include <boost/multiprecision/cpp_int.hpp>//int1024_t n
//using namespace boost::multiprecision;
//ctrl+shift+r then ctrl+i
#define int long long
const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define f(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ndigits(a) (int)log10(a)+1
#define bitcnt(x) __builtin_popcountll(x);
#define pnr(s) do{cout<<s<<endl;}while(next_permutation(all(s)));
#define iv int n=0;cin>>n;vector<int>v(n); f(i,n) cin>>v[i];
#define nv vector<int>v;int temp=0;while(cin>>temp){v.push_back(temp);if(cin.get()=='\n'){break;}} int n=v.size();
#define pv(v) for(auto i:v){cout<<i<<" ";};
#define pm(a) f(i,n){f(j,m){cout<<a[i][j]<<" ";}cout<<endl;}
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define isPrime(x) int count=0;for(int i=0;i<sqrt(n);i++){(n%i==0)&&((n/i==i)?count++:(count+=2));(count>2)?(return false):(return true)}
#define ncr(n, r) ({ int _n = (n), _r = (r), p = 1, k = 1; _r = min(_r, _n - _r); if (_r != 0) { while (_r) { p *= _n; k *= _r; int m = __gcd(p, k); p /= m; k /= m; _n--; _r--; } } else { 1; } p; })
//map returns 0 for element that don't exist
using namespace std;
signed main(){
// freopen("input.txt","r",stdin);
    io;

    return 0;
}