#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=0;
        int i=0;
        for( i=0;i<n;i++){
            if(sum>m){
                break;
            }
            sum+=arr[i];
        }
        cout<<i+1<<endl;
    }
    return 0;
}