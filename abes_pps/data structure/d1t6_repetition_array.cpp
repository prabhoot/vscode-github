#include<iostream>
using namespace std;
int main(){
    int a[65]{6,7,4,2,8,7};//7 repeted
    int temp{};
    int flag{1};
    for(int i=0;i<=5;i++){
        temp=a[i];
        for(int j=i;j<=5;j++){
            if(temp==a[j]){
                flag++;
            }
            else if(flag==2){
                break;
            }
        }
        if(flag>=1){
            cout<<a[i]<<endl; 
        }
    }

    return 0;
}