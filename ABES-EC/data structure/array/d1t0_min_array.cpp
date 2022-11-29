#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[3]={1,2,3};
    int min_number=INT_MAX;
    for (int i=0;i<3;i++){
        if(min_number>a[i]){
            min_number=a[i];
        }
    }
    cout<<min_number;
    return 0;
}