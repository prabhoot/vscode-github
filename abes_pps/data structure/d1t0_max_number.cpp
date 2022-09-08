#include <iostream>
using namespace std;
    int main (){
    int a[3]={0,5,4};
    int max{};
    for (int i=0;i<3;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max;

    return 0;
}