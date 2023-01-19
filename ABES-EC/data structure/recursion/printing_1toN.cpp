#include<iostream>
using namespace std;
void fun(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    fun(++i, n);
}
int main(){
    fun(1,5);
    return 0;
}