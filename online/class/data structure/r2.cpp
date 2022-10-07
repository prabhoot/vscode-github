#include<iostream>
using namespace std;
void name1(int n,int i){
    if(i>n){
    return;
    }
    cout<<"prabhoot";
}
void name(int n){
    if(n==0){
        return;
    }
    cout<<"prabhoot";
    name(n-1);
    name1(n, 0);
}
int main(){
    int n{2};
    name(n);

    return 0;
}