#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool prcd(char a, char b){
    if(a=='^'||a=='*'||a=='/'||a=='%'){
        if(b=='^'){
            return false;
        }
        else{return true;}
    }
    else{ 
        if(b=='+'||b=='-'){
            return true;
        }
        else {
        return false;
        }
    }
}
void itp(string infix){
        stack<char> s;
    int i=0;
    string postfix="";
    while(infix[i]!='\0')
    {
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        else            
        {
            while (!s.empty()&& prcd(s.top(),infix[i])){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }
    cout<< postfix;
}
int main(){
    stack<char> infix;
    string infi;
    getline(cin,infi);
    itp(infi);
    return 0;
}