#include<iostream>
using namespace std;
bool noofdigits(int n){
    int count=0;
    while (n!=0) {
    int t=n%10;
    if(t==7){
        return true;
    }
    n=n/10;
    }
    return false;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(noofdigits(n)){
            cout<<"yes\n";
        }
        else {
        cout<<"no\n";
        }
        
    }
    return 0;
}