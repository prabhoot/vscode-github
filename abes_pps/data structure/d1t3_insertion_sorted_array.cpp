#include<iostream>
using namespace std;
int main(){
    int a[100]={5,8,11,13,25,29};//sorted array
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
        temp++;
        }
        i++;
    }
    a[loc]=no_to_insert;
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}