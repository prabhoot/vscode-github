#include <bits/stdc++.h>
using namespace std;

long long int binary_multi(long long int a, long long int b, long long int M)
{
    long long int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return (ans)%M ;
}
long long int binary_expp(long long int a, long long int b, long long int M)
{
    long long int ans = 1;
    a %= M;
    while (b)
    {
        if (b & 1)
        {
            ans = binary_multi(a,ans, M);
        }
        a = binary_multi(a, a, M);
        b >>= 1;
        ans%=M;
    }
    return (ans) % M;
}
int main()
{
    long long int a = 10e6;
    long long int b = 2;
    long long int M = 10e17+1;
    cout << binary_expp(a, b, M) << " ";
    cout << binary_multi(a, b, M);
    return 0;
}