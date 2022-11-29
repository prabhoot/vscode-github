#include <iostream>
using namespace std;
int main(){
    int a[100]={1,4,9,15,29,35};
    int i{};
    int loc{};
    int number_to_delete{15};
    while(i<6){
        if(number_to_delete==a[i]){
            loc=i;
            for(int i=loc;i<6;i++){
                a[i]=a[i+1];
            }
        }
          i++;
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}