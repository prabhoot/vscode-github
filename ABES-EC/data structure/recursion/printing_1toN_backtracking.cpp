#include<iostream>
using namespace std;
void fun(int i,int n){
    if(i==n){
        return;
    }
    fun(i+1, n);
    cout<<n-i<<" ";
    }
int main(){
    fun(0, 5);
    return 0;
}