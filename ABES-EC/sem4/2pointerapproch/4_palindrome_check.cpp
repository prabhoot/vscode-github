#include <iostream>
using namespace std;
int main(){
    string str="ardra";
    int n=str.length();
    int i=0,j=n-1;
    while(i<j&&str[i]==str[j]){
        i++;j--;
    }
    if(i==n/2){
        cout<<"palindrome"<<endl;
    }
    else {
    cout<<"not palindrome"<<endl;
    }
    return 0;
}