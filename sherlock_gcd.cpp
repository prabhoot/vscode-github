#include <iostream>
using namespace std;

int main(){
    int n=10000;
    int j=0;
    int primeindex[10000]={0};
    int primeno[10000]={0};
    for (int i=2; i<n; i++) {
        if (primeindex[i]==0) {
        for(int j=i*i;j<=n;j+=i){
            primeindex[j]=1;
        }
        }
    }
    for(int i=2;i<n;i++){
        // cout<<prime[i]<<" ";
        if (primeindex[i]==0) {
            primeno[j]=i;
            j++;
        // cout<<i<<" ";
        }
    }
    for(int i=0;i<j;i++){
        cout<<  primeno[i]<<" ";
    }
    int flag=-1;
    for(int i=0;i<n;i++){
        a[i]==primeno[i];
    }
    return 0;
}