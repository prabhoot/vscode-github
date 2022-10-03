#include <iostream>
#include <memory>
#include <unistd.h>
using namespace std;

int rev(int n,int r){
  int sum{};
        if(n==0){
            cout<<r;
            return r;
        }
        cout<<"n"<<r<<" ";
        r=n%10;
        sum=sum*10+r;
        cout<<"t"<<r<<sum<<" ";
        return rev(n/10);
}
int main(){
    int n{121};
    //cin>>n; 
    int r{};
    int temp=rev(n,r);
    if(temp==n){
        cout<<"palindrome";
    }
    else{cout<<"not";}
    return 0;
}