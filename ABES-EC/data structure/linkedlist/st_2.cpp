// Program for Decimal to Binary Conversion
#include<iostream>
using namespace std;
#define stacksize 16
struct stack {
    int item[stacksize];
    int top;
};
struct stack s;
void initial(){
    s.top=-1;
}
int Stacktop(){
    return s.item[s.top];
}
int isempty(){
    if(s.top==-1){
        return 1;
    }
    else
        return 0;
}
void push(int x){
    if(s.top!=stacksize-1){
    s.top++;
    s.item[s.top]=x;
    }
    else{
        cout<<"stack over flow";
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
void decimal_to_binary(int n){
    while(n){
    push(n%2);
    n=n/2;
    }
    while(!isempty()){
    cout<<pop();
    }    
}
int main(){
    initial();
    int n;
    cin>>n;
    decimal_to_binary(n);
    return 0;
}