#include <iostream>
#include <string>
using namespace std;
struct node{
    string info;
    struct node *next ;
};
struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void ibeg(struct node **start,string x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
void dbeg(struct node **start){
    struct node *p=*start;
    *start=p->next;
    free(p);
}
void d(struct node **start,string a){
    struct node *p=*start;
    struct node *temp;
    if(p==NULL){
        cout<<"linklist underflows";
        exit(1);
    }
    if(p->next==NULL){
        dbeg(start);
    }
    while(p->next!=NULL){
             if(p->next->info==a){
                // string x=p->next->info;
                p->next=(p->next)->next;
                free(p->next);
             
        p=p->next;
    }}
}
string dend(struct node **start){
    struct node *p;
    p=*start;
    while((p->next)->next!=NULL){
        p=p->next;
    }
    string x=p->info;
    p->next=NULL;
    free(p->next);
    return x;
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL){
    cout<<p->info<<" ";
    p=p->next;
    }
    
}
void iaft(struct node **start,string a,string x){
    struct node *temp;
    temp=*start;
    while(temp!=NULL){
        if(temp->info==a){
            struct node *p;
            p=getnode();
            p->info=x;
            p->next=temp->next;
            temp->next=p;
            return;
            }
        temp=temp->next;
    }
}
void iend(struct node **start,string x){
    struct node *temp;
    temp=*start;
    if(temp==NULL){
        ibeg(start,x);
        return;
    }
    else{
        while(temp->next!=NULL){
        temp=temp->next;
    }
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=NULL;
    temp->next=p;
    }
}