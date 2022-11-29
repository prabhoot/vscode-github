#include <cstdlib>
#include <iostream>
#include <type_traits>
#define stacksize 5
# define true 1
#define false 0
using namespace std;

struct Stack{
    int item[stacksize];
    int top;
};
struct Stack s;
void initial(){
    s.top=-1;
}
int isempty(){
    if(s.top==(-1)){
        return true;
    }
    return false;

}
void push(int x){
if(s.top==stacksize-1){
    cout<<endl<<"stack over flow";
    exit(1);
}
s.top++;
s.item[s.top]=x;
}
int pop(int x){
    if (isempty()){
        cout<<endl<<"stack underflow";
        exit(1);
    }
    x=s.item[s.top];
    s.top--;
    return x;
}
int Stacktop(int x){
    x=s.item[s.top];
    return x;
}
void display(s[stacksize]){
    

}
int main(){
int x;
initial();
for(int i=0;i<stacksize;i++){
    int t;
    cin>>t;
    push(t);
    
}
//stack is ready

x=pop(s.item[s.top]);
cout<<x;
    return 0;
}