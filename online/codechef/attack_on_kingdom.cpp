// https://www.codechef.com/DSAPREP_01/problems/KNGATK
#include <algorithm>
#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
        sort(a,a+n);
        cout<<a[1]<<endl;
    }
    return 0;
}