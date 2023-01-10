#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int i;
    for(i=n-1;i>=0;i--){
        sum+=arr[i];
        if(sum>=target){
            break;
        }
    }
    cout<<i<<endl;
  }
  return 0;
}