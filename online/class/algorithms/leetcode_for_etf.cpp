// Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.
#include <bits/stdc++.h>
using namespace std;

int superPow(int a, vector<int> &b)
{
    int ans = 1;
    int n = b.size();
    int res_b = 1;
    int base = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        res_b = res_b*((b[i] * base) % 1440)%1440;
        base *= 10;
    }
    return res_b;
}
int main()
{
    int a = 2;
    vector<int> v = {1, 0};
    cout << superPow(a, v);
    return 0;
}