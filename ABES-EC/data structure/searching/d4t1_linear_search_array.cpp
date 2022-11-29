#include <iostream>
using namespace std;
int linear_search(int a[],int n,int search_key){
 for(int i{};i<n;i++){
  if(a[i]==search_key){
    cout<<i<<" is the index of the required key";
    return 0;}
  }
cout<<"key is not present in the array";
 return 0;
}
int main(){
   int n{};
  cout<<"size of array";
  cin>>n;
  int a[n];
  int search_key{};
  cout<<"enter the search key";
  cin>>search_key;
  cout<<"enter elements of the array";
for(int i{};i<n;i++){
 cin>>a[i];
}
linear_search(a,n,search_key);
  return 0;
}