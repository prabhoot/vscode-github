// Program for Decimal to Hexadecimal Conversion.
#include "stack.h"
using namespace std;
void decimal_to_hexadecimal(int n){
    char arr[]{'A','B','C','D','E','F'};
    while(n){
        push(n%16);
        n=n/16;
    }
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
   int n;
   cin>>n;
   cout<<"0x";
   decimal_to_hexadecimal(n);
}