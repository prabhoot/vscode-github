#include <cstdlib>
#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next ;
};
struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
void delbeg(struct node **start){
    struct node *p=*start;
    struct node *q=p->next;
    struct node *r=(p->next)->next;
    p->next=r;
    free(q);
}
int del(struct node **start,int a){
    struct node *p=*start;
    struct node *temp;
    if(p==NULL){
        cout<<"linklist underflows";
        exit(1);
    }
    if(p->next==NULL){
        delbeg(start);
        // return x;
    }
    while(p->next!=NULL){
             if(p->next->info==a){
                int x=p->next->info;
                p->next=(p->next)->next;
                free(p->next);
             return x;
             }
        p=p->next;
    }
    return 0;
}
int delend(struct node **start){
    struct node *p;
    p=*start;
    while((p->next)->next!=NULL){
        p=p->next;
    }
    int x=p->info;
    p->next=NULL;
    return x;
    free(p->next);
}
void travese(struct node *start){
    if ((start)!=NULL) {
    cout<<(start)->info<<" ";
    travese(((start)->next));
    }
}
void rev_travese(struct node *start){
     if ((start)!=NULL) {
    travese(((start)->next));
    cout<<(start)->info<<" ";
    }
}
void insaft(struct node **start,int a,int x){
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
void insend(struct node **start,int x){
    struct node *temp;
    temp=*start;
    if(temp==NULL){
        insbeg(start,x);
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
void oill(struct node **start,int x){
    struct node *p=*start;
    struct node *q=NULL;
    while((p!=NULL)&&((p->info)<=x)){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        insbeg(start,x);
    }
    else if(p==NULL){
        insend(start,x);
    }
    else{
    insaft(start, q->info, x);}
}
void revll(struct node **start){
    struct node *c=*start;
    struct node *p=NULL;
    struct node *n=c->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    *start=p;
}
struct node *splitll(struct node **start){
    struct node *t=*start;
    struct node *r=(*start)->next;
    while(r!=NULL&&r->next!=NULL){
        t=t->next;
        r=r->next->next;
    }
    struct node *start2=t->next;
    t->next=NULL;
    return start2;
}
int length_ll(struct node **start){
    int count=0;
    struct node *p=*start;
    while (p!=NULL) {
    p=p->next;
    count++;
    }
    return count;
}

struct node *merge_point_ll(struct node **start1,struct node **start2){
    struct node *p=*start1;
    struct node *q=*start2;
    int a=length_ll(start1);
    int b=length_ll(start2);
    int t=abs(a-b);
    if(a>b){
        while (t--) {
        p=p->next;
        }
    }
    else {
    while (t--) {
    q=q->next;
    }
    }
    while (p!=NULL) {
        if(p->info==q->info){
            return p;
        }
    q=q->next;
    p=p->next;
    }
    return NULL;
}