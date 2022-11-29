// Program for Stack Primitive Operations
#include<iostream>
using namespace std;
#define stacksize 2
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
void display(stack s){
    for(int i=0;i<stacksize;i++){
        cout<<s.item[i]<<endl;
    }
}
int main(){
initial();
cout<<s.item[s.top]<<endl;
cout<<Stacktop()<<endl;
pop();
    return 0;
}