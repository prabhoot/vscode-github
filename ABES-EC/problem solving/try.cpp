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
#define iv int n=0;cin>>n;vector<int>v(n); f(i,n) cin>>v[i];
#define nv vector<int>v;int temp=0;while(cin>>temp){v.push_back(temp);if(cin.get()=='\n'){break;}} int n=v.size();
#define pv(v) f(i,n)cout<<v[i]<<" ";
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void my(char a,char b){
    if(a=='1'&&b=='1'){
        cout<<"IDK\n";
    }
    if(a=='0'&&b=='0'){
        cout<<"NO\n";
    }
    if(a=='0'&&b=='1'){
        cout<<"YES\n";
    }
    if(a=='1'&&b=='0'){
        cout<<"YES\n";
    }
}
signed main() {
    io;
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        str+='0';
        for (int i=0;i<n+1;i++){
            my(str[i],str[i+1]);
        }
    }
    return 0;
}