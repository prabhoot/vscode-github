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
#define ndigits(a) (int)log10(a)+1
#define bitcnt(x) __builtin_popcountll(x);
#define pnr(s) do{cout<<s<<endl;}while(next_permutation(all(s)));
#define iv int n=0;cin>>n;vector<int>v(n); f(i,n) cin>>v[i];
#define nv vector<int>v;int temp=0;while(cin>>temp){v.push_back(temp);if(cin.get()=='\n'){break;}} int n=v.size();
#define pv(v) for(auto i:v){cout<<i<<" ";};
#define pm(a) for(auto i:a){for(auto j:i){cout<<j<<" ";}cout<<endl;}
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define isPrime(x) int count=0;for(int i=0;i<sqrt(n);i++){(n%i==0)&&((n/i==i)?count++:(count+=2));(count>2)?(return false):(return true)}
#define ncr(n, r) ({ int _n = (n), _r = (r), p = 1, k = 1; _r = min(_r, _n - _r); if (_r != 0) { while (_r) { p *= _n; k *= _r; int m = __gcd(p, k); p /= m; k /= m; _n--; _r--; } } else { 1; } p; })
//map returns 0 for element that don't exist
using namespace std;
struct node{
	int value;
	node *left=NULL;
	node *right=NULL;
    node() : value(0), left(nullptr), right(nullptr) {}
    node(int x) : value(x), left(nullptr), right(nullptr) {}
    node(int x,node *l,node *r) : value(0), left(l), right(r) {}
};

vector<int>ans;
int my(node *root,node *p,node *q){
    if(!root || root==p || root==q)return root;
    node *left=my(root->left,p,q);
    node *right=my(root->right,p,q);
    if(left==NULL)return right;
    else if(right==NULL)return left;
    else{
        return root;
    }
}

signed main(){
// freopen("input.txt","r",stdin);
    io;
    struct node *start=new node(1);
    start->left=new node(2);
    start->right=new node(3);
    start->left->left=new node(4);
    start->left->right=new node(5);
    start->right->left=new node(6);
    start->right->right=new node(6);
    my(start,2,6);
}