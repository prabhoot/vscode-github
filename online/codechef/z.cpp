#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES"
#define no cout << "NO"
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace boost::multiprecision;
using namespace std;
const ll N = 1e6;
ll v[N];
ll sum = 0;
ll unstable = 0;
ll fun(ll a, ll b)
{
    if(a==b){
        return 0;
    }
    for (int i = a; i <= b; i++)
    {
        sum += (v[i] - v[i + 1]);
    }
    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    ll temp;
    v[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    for (auto i = 0; i <= n; i++)
    {
        cout << v[i]<<" ";
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            temp=v[i-j];
            if(temp==fun(j,i)){
                cout<<i<<" "<<j<<endl;
                unstable++;
            }
        }
    }
    cout<<unstable<<endl;
    // cout<<fun(3,1);
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