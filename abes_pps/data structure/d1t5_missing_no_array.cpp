//sorted array
#include<iostream>
using namespace std;
int main(){
    int a[69]={4,5,6,8,9,10};//7 missing
    int temp{};
    int missing_number{};
    for(int i=0;i<=5;i++){
        if((a[i+1]-a[i]!=1&&temp==0)){
            missing_number=a[i]+1;
            temp++;
        }
    }
   cout<<missing_number;
    return 0;
}