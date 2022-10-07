#include <iostream>
using namespace std;
void c(int a[],int i,int n){
    if(i<n){
        c(a,i+1,n);
        cout<<a[i];
    }
}
int main(){
    int a[]{1,2,3,4,5};
    c(a, 0, 5);
    return 0;
}