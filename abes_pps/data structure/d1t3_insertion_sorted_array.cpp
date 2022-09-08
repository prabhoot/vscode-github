#include<iostream>
using namespace std;
int main(){
    int a[100]={1,8,13,34,55,60};//sorted array
    int no_to_insert{15};
    int i{};
    int loc{};
    int temp{};
    while(i<6){
        if(no_to_insert<a[i]&&temp==0){
            loc=i;
        for(int i=6;i>=loc;i--){
            a[i]=a[i-1];
        }
        temp++;//if condition is not enough temp is req
        }
        i++;
    }
    a[loc]=no_to_insert;
    for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}