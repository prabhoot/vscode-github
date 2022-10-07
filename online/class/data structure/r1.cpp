#include<iostream>
using namespace std;
void fun(int n){
    if((n)==0){
        cout<<"m"<<endl;
        
        return;
    }

fun(--n);
cout<<n;
}
int main(){
    int n{3};
    fun(n);
    return 0;
}