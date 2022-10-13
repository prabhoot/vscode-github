#include <cctype>
#include <cmath>
#include <iostream>
#include<stack>
#include <string>
using namespace std;
int main(){
    int b,c;
    stack<char>s;
    string a;
    getline(cin,a);
   cout<<a;
   int i=0;
   while(a[i]!='\0'){
   if(isdigit(a[i])){ 
    s.push(a[i]-48);
    i++;}
   
   else{cout
    s.pop();
    
   }}

    pow(2,5);
    
    // while (!s.empty()) {
    //     cout << s.top() <<" ";
    //     s.pop();
    // }
    return 0;
}