// union of two array
#include <iostream>
using namespace std;
int union_array(int m,int a[],int n,int b[]){
    int c[100];
    int i=0;
    int j=0;
    int k=0;
    while (i<m&&j<n){
        if (a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j]){
        c[k]=b[j];
        k++;
        j++;
        }
        else {
        c[k]=a[i];
        k++;i++;j++;
        }
    }
    while (i<m){
        c[k]=a[i];
        k++;
        i++;
    }
    while (j<n) {
    c[k]=b[j];
    k++;
    j++;
    }
     for (int i = 0; i <=m+n; i++) {
    a[i] = c[i];
  }
  return m+n;
}
int main(){
    int a[10]={1,2,3,5,7};
    int b[13]={2,4,6};
    int m=5,n=3;
    m=union_array(m, a, n, b);
    for (int i=0;i<m-1;i++){//since it contains one garbag value.
        cout<<a[i]<<" ";
            }
    return 0;
}