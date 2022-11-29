// Program for Decimal to Octal Conversion
#include <iostream>
using namespace std;
# define stacksize 30
struct stack {
    int item[stacksize];
    int top;
};
struct stack s;
void initial(){
    s.top=-1;
}
int isempty(){
    if(s.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int Stacktop(){
    return s.item[s.top];
}
void push(int x){
    if(s.top!=stacksize-1){
    s.top++;
    s.item[s.top]=x;}
    else{
        cout<<"stack overflow ";
        exit(1);
    }
}
int pop(){
    if(s.top!=-1){int x=s.item[s.top];
    s.top--;
    return x;}
    else{
        cout<<"stack under flow";
        exit(1);
    }
}
void decimal_to_octal(int n){
    while(n){
        push(n%8);
        n=n/8;
    }
    while(!isempty()){
        cout<<pop();
    }
}
int main(){
    initial();
    int n;
    cin>>n;
    decimal_to_octal(n);
    return 0;
}