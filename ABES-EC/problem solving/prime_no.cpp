#include <iostream>
using namespace std;
void prime (int n){
   int flag=0;
   for(int i=2;i<n;i++){
if(n%i==0){
    flag++;
    break;
}
   }
    if(flag==0){
        cout<<"prime";
    }
    else{cout<<"not prime";
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}