// this is same code as a increase to 10 power 18;
#include <bits/stdc++.h>
using namespace std;
long long int be(long long int a, long long int b, long long int M)
{
    a%=M;
    long long int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        a = (a * a) % M;
        b >>= 1;
    }
    return (ans);
}
int main()
{
    long long int M = 10e6 + 7;
    long long int a = 100000000000000000, b = 6;
    cout << be(a, b, M) << endl;
    // cout <<fixed<<setprecision(10)<<((pow(a, b)));
    return 0;
}