// 6
// 4
// 1 2 3 4 
// 4 
// 2 3 4 5
// 3 
// 1 2 3
// 3
// 2 3 4
// 4
// 1 1 1 1
// 1
// 15


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll m = 998244353;

// long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        // long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
        ll arr[n];

        ll cnt = 0;
        for (int i=0;i<n;i++)
        {
            // cin >> x;
            // cnt += x;
            cin>>arr[i];
// long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
            cnt+=arr[i];
        }

        if (n % 2 == 1)
        {
            if (cnt % 2 == 1)
            {
                // long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
                cout << "chef" << endl;
            }
            else
            {// long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
                cout << "chefina" << endl;
            }
        }
        else
        {
            ll x = *min_element(arr, arr + n);

            if (x == 1)
            {
                cout << "chef" << endl;
                // long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
                continue;
            }
           

            if (cnt % 2 == 0 && x % 2 == 0)
            {
                cout << "chefina" << endl;
                // long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
            }
            else
            {
                cout << "chef" << endl;
                // long long binpow(long long a, long long b)
// {
//     if (b == 0)
//         return 1;
//     long long res = binpow(a, b / 2);
//     if (b % 2)
//         return (res % m * res % m * a) % m;
//     else
//         return res % m * res % m;
// }
            }
        }
    }
    return 0;
}