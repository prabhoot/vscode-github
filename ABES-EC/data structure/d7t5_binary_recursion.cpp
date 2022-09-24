#include <iostream>
using namespace std;
int binary_search(int a[],int n,int low,int high,int search_key){
    int mid{0};
        if(low<=high){
            mid=(low+high)/2;
        }
        else if(a[mid]==search_key){
            return mid;
        }
        else if(search_key<a[mid]){
            binary_search(a,n,low,mid-1,search_key);
        }
        else {
            binary_search(a,n,mid+1,high,search_key);
        }
        cout<<"not found";
    return 0;
}
int main(){
   int n{6};
  //cin>>n;
  int a[n]{1,3,5,6,7,8};
// for(int i{};i<n;i++){
//  cin>>a[i];
// }
int search_key{};
    int low{};
    int high{};
    cin>>low>>high>>search_key;
binary_search(a,n,low,high,search_key);
    return 0;
}