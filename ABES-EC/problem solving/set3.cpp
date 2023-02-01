#include <iostream>
#include <set>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    set<int>s;
    int n=5;
    // s.insert(arr[0]);
    int sum=arr[0];
    for(int i=1;i<=n;i++){
        s.insert(sum);
        sum+=arr[i];
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}