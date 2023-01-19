// Program for Decimal to Any Base Conversion
#include <iostream>
#include "stackfunction.cpp"
using namespace std;
void decimal_to_anybase(int n,int base){
    char arr[]{'A','B','C','D','E','F'};
    while(n){push(n%base);
    n=n/base;}
    while(s.top!=-1){
        int x=pop();
        if(x>=9){
            x=x%10;
            cout<<arr[x];
        }
        else{cout<<x;}
    }
    }
int main(){
    initial();
    int n,base;
    cin>>n>>base;
    cout<<"The result is:";
    decimal_to_anybase(n,base);
    cout<<" base "<<base;
    return 0;
}
