// Prabhoot
// #include <boost/multiprecision/cpp_int.hpp>//int1024_t n
// using namespace boost::multiprecision;
#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f0(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define iv           \
    ll n = 0;        \
    cin >> n;        \
    vector<ll> v(n); \
    f0(i, n) cin >> v[i];
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const ll N = 1e6;
const ll M = 10e9 + 7;
int m[4][2] = {{3, 0}, {1, 2}, {1, 2}, {1, 2}};
std::vector<int> fun(const std::string& binaryString) {
    std::vector<int> result;

    for (const char& bit : binaryString) {
        if (bit == '0') {
            result.push_back(0);
        } else if (bit == '1') {
            result.push_back(1);
        } else {
            // Handle invalid characters if needed
            std::cerr << "Invalid character in binary string: " << bit << std::endl;
        }
    }
    return result;
}
void solve() {
    ll sum = 1;
    int n=0;
    cin >> n;
    string str;
    cin >> str;
    vector<int>v=fun(str);
    for (int i = 0; i < n-2; i += 2) {
        int a = (v[i]) * 2 + (v[i + 1]);
        int b = (v[i + 2]);
        if (a == 0 && b == 1) {
            cout<<"0\n";
            return ;
        }
        sum = (sum * m[a][b]) % M;
    }
    cout << (sum)%M << endl;
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