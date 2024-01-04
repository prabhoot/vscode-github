#include <bits/stdc++.h>
// Prabhoot
// #include <boost/multiprecision/cpp_int.hpp>//int1024_t n
// using namespace boost::multiprecision;
// ctrl+shift+r then ctrl+i
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
#define iv            \
    int n = 0;        \
    cin >> n;         \
    vector<int> v(n); \
    f(i, n) cin >> v[i];
#define nv                       \
    vector<int> v;               \
    int temp = 0;                \
    while (cin >> temp) {        \
        v.push_back(temp);       \
        if (cin.get() == '\n') { \
            break;               \
        }                        \
    }                            \
    int n = v.size();
#define pv(v) f(i, n) cout << v[i] << " ";
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int alicelis(int A[], int N) {
    int count = 1;
    int last = A[1];
    for (int i = 2; i <= N; i++) {
        if (A[i] > last) {
            count++;
            last = A[i];
        }
    }
    return count;
}
signed main() {
    io;
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x;
        int arr[n + 1];
        f(i, n) { arr[i] = i; }
        y = alicelis(arr, n);
        cout << y;
        x += y;
        if (x > n) {
            x = x - y;
        }
        if (x < 0) {
            cout << "no\n";
        }
        if (x == 0) {
            for (int i = n; i >= 0; i--) {
                cout << arr[i] << " ";
            }
        }
        if (x == n) {
            f(i, n) cout << arr[i] << " ";
        } else if (n - 1 == x) {
        }
    };
    return 0;
}