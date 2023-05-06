#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    cout<<a<<" "<<b<<endl;
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

int main()
{
    cout << gcd(18,12);
    return 0;
}