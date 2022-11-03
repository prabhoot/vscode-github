#include <iostream>
using namespace std;
void reverse_no(int n){
    if(n==0){
        return;
    }
    else{
        int t=n%10;
        cout<<t;
        reverse_no(n/10);
    }
}
int main(){
    int n;
    cout<<"enter a no. to reverse:";
    cin>>n;
    reverse_no(n);
    return 0;
}