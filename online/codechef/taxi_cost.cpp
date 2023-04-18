#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        long cost=0;
        cin>>cost;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]||i!=0&&a[i-1]==1){
                count++;
            }
        }
        cout<<count*cost<<endl;
    }
    return 0;
}