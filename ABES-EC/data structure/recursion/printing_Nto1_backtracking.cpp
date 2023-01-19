#include<iostream>
using namespace std;
void fun(int i,int n){
    if(i==n){
        return;
    }
    else {
    fun(i+1, n);
    cout<<i+1<<" ";
    }
}
int main(){
    fun(0,5);
    return 0;
}