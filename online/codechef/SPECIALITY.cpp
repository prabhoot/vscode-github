#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int greatest(int a,int b,int c){
    a=max(a,b);
    a=max(a,c);
    return a;
}
int main(){
    int t{};
    cin>>t;
    while(t--){
        int a{},b{},c{};
        cin>>a>>b>>c;
        if(a==greatest(a, b, c)){
            cout<<"setter"<<endl;
        }
        else if(b==greatest(a, b, c)){
            cout<<"tester"<<endl;
        }
        else{
            cout<<"editorialist"<<endl;
        }
    }
    return 0;
}