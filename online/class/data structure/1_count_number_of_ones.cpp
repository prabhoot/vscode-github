// count number of onces in a decimal number.
#include <iostream>
using namespace std;
int main(){
    int count=0;
    int n=10;// =>1010
    while(n!=0){
        if(n&1){
            count++;
        }
    n=n>>1;
    }
    cout<<count;
    return 0;
}