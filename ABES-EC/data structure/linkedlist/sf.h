#include <bits/stdc++.h>
#define stacksize 10
struct stack{
    char item[stacksize];
    int top;
};
void initialise(struct stack *s){
    s->top=-1;
}
bool isempty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s,char x){
    if(s->top!=stacksize-1){
    s->top++;
    s->item[s->top]=x;
    }
    else{
        printf("stack overflow");
        exit(1);
    }
}
char pop(struct stack *s){
    if(s->top!=-1){char x=s->item[s->top];
    s->top--;
    return x;}
    else{
        printf("stack underflow");
        exit(1);
    }
}
char stacktop(struct stack *s){
    return s->item[s->top];
}