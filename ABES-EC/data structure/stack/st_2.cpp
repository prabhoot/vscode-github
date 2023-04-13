// Program for Decimal to Binary Conversion
#include "stack.h"
void decimal_to_binary(int n){
    while(n){
    push(n%2);
    n=n/2;
    }
    while(!isempty()){
    cout<<pop();
    }    
}
int main(){
    initial();
    int n;
    cin>>n;
    decimal_to_binary(n);
    return 0;
}