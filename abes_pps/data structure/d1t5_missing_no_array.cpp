//sorted array
#include<iostream>
using namespace std;
int main(){
    int a[69]={25,26,27,28,30};//29 missing
    int temp{};
    int missing_number{};
    for(int i=0;i<=5;i++){
        if((a[i+1]-a[i]!=1&&temp==0)){
            missing_number=a[i]+1;
            temp++;
        }
    }
    
   cout<<missing_number<<endl;
    return 0;
}