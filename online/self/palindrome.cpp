#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    char arr[a+1];
    cin>>arr;
    int v=1;
    for(int i=0;i<a;i++){
       if( arr[i]!=arr[a-1-i]){
        v=0;
        break;
       }
    }
       if (v==0) {
       cout<<"not palindrome";
       }
       else {
        cout<<"palindrome";
       } 
    
    return 0;
}