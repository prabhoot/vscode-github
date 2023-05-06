#include <bits/stdc++.h>
using namespace std;
int bm(int a, int b)
{
    int ans=0;
    while (b)
    {
        if (b & 1)
        {
            ans = ans + a;
        }
        a += a; 
        b >>= 1;
    }
    return ans;
}
int main()
{
    cout<<bm(3,13);
    return 0;
}