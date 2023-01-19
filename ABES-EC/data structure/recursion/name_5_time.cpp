#include<iostream>
using namespace std;
void fun(int i){
    if(i==5){
        return;
    }
    else {
    cout<<"hi ";
    fun(i+1);
    }
}
int main(){
    fun(0);
    return 0;
}