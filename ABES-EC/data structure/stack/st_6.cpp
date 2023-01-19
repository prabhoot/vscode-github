// Program to check the validity of Parenthesized Arithmetic Expression using Stack
#include <iostream>
#include <string>
#include "stackfunction.cpp"
using namespace std;
bool check_parenthesis(string str){
     initial();
     struct stack s;
    int i{};
    while(str[i]=='\0'){
        char x=str[i];
        if(x=='('){
            push(x);
            
        }
        else{
            pop();
        }
    }
    if(isempty()){
        return true;
    }
    else{
        return false;
    }
    i++;
}
int main(){
    string str;
    cin>>str;
    if(check_parenthesis(str)==true){
        cout<<"brakets are balanced";
    }
    else 
        cout<<"brakets are UNbalanced";
    return 0;
}