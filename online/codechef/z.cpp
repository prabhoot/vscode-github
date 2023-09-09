#include<iostream>
using namespace std;
struct node {
    int key;
    int value;
    struct node *next=NULL;
};
struct node *getnode (){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
struct node *start=NULL;
struct node *lnode=NULL;
int put(int key, int value){
    struct node *p=getnode();
    p->key=key;
    p->value=value;
    if(start==NULL){
        
    }
    start->next=p;
    lnode=p;
}
