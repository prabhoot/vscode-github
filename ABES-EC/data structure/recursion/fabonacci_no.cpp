#include<iostream>
using namespace std;
int fabo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fabo(n-1)+fabo(n-2);
}
int main(){
    cout<<fabo(6);
    return 0;
}