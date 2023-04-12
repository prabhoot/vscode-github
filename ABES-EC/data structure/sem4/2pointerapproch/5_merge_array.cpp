// merge array
#include<iostream>
using namespace std;
int merge_array(int m,int a[],int n,int b[]){
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
        else {
        c[k]=b[j];
        k++;
        j++;
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
    int a[7]={1,3,5,7};
    int b[13]={2,4,6};
    int m=4,n=3;
    n=merge_array(m, a, n, b);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
            }
    return 0;
}