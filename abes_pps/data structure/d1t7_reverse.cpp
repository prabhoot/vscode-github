#include <iostream>
using namespace std;
int main(){
    int a[3]={29,30,31};
    for(int i=0,j=(3-1);i<3;i++,j--){
        if(i<j){
            int temp=a[0];
            a[i]=temp;
            a[i]=a[j];
            a[j]=temp;
        }
        else{
            break;
        }
    }
     for(int i=0;i<3;i++) {
    cout<<a[i]<<" ";
    }
   cout<<endl;
    return 0;
}