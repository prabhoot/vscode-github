#include <iostream>
#include <type_traits>
using namespace std;
void  print_array(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void bubble_sort(int a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<(n-1)-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
}
int main(){
    int n=6;
 int a[]{8,45,2,68,5,1};
 bubble_sort(a, n);
 print_array(a,n);
    return 0;
}