#include <exception>
#include<iostream>
using namespace std;
int main(){
    int i{};
    int temp{};
    int n;
    cout<<"enter the number of elements you are going to enter in the array";
    cin>>n;
    cout<<"enter the index on which u want to insert";
    int index{0};
    cin>>index;
    int loc{index};
    cout<<"what no to insert";
    int insert_no{};
    cin>>insert_no;
    cout<<"enter the array";
     int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 while(i<n){
  if(i==loc){
    for (int j=n+1;j>=loc;j--){
        a[j]=a[j-1];
    }
    }
    i++;
 }
 a[loc]=insert_no;
  for(int i=0;i<n+1;i++) {
    cout<<a[i]<<endl;
    }
   
      return 0;
 }
  
