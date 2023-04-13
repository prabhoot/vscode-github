// insertion in sorted array
#include <iostream>
#include <type_traits>
using namespace std;
int shift(int n,int a[],int target){
    n=n+1;
    for (int i=n;i>=target;i--){
        a[i]=a[i-1];
    }
    return n;
}
void display(int n,int *a){
  for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }   
}
int main(){
    int a[10]={1,2,13,14,25};
    int n=5;
   int key=0;
   int i=0;
   while (a[i]<key&&i<n){
    i++;
   }
    n=shift(5,a, i);
    a[i]=key;
    display(5,a);
    return 0;
}
// symmtrictic difff