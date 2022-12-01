#include <iostream>
using namespace std;
struct node{
    int  coff;
    int exp;
    struct node *next ;
};
struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int c,int e){
    struct node *p;
    p=getnode();
    p->coff=c;
    p->exp=e;
    p->next=*start;
    *start=p;
}
int delbeg(struct node **start){
    struct node *p=*start;
    *start=p->next;
    int x=p->coff;
    free(p);
    return x;
}
int del(struct node **start,int a){
    struct node *p=*start;
    struct node *temp;
    if(p==NULL){
        cout<<"linklist underflows";
        exit(1);
    }
    if(p->next==NULL){
        int x=delbeg(start);
        return x;
    }
    while(p->next!=NULL){
             if(p->next->coff==a){
                int x=p->next->coff;
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
    int x=p->coff;
    p->next=NULL;
    free(p->next);
    return x;
}
struct node *concatll(struct node **start1, struct node **start2){
    struct node *p,*q;
    p=*start1;
    q=*start2;
   if(*start1!=NULL){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*start2;
    return *start1;
   }
   else{
    return *start2;
   }
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL){
    cout<<p->coff<<"^"<<p->exp<<" ";
    p=p->next;
    }    
}
void insaft(struct node **start,int a,int x){
    struct node *temp;
    temp=*start;
    while(temp!=NULL){
        if(temp->coff==a){
            struct node *p;
            p=getnode();
            p->coff=x;
            p->next=temp->next;
            temp->next=p;
            return;
            }
        temp=temp->next;
    }
}
void insend(struct node **start,int c, int e){
    struct node *temp;
    temp=*start;
    if(temp==NULL){
        insbeg(start,c,e);
        return;
    }
    else{
        while(temp->next!=NULL){
        temp=temp->next;
    }
    struct node *p;
    p=getnode();
    p->coff=c;
    p->exp=e;
    p->next=NULL;
    temp->next=p;
    }
}
struct node *polyaddll(struct node **poly1, struct node **poly2){
    struct node *poly3, *p, *q;
    p=*poly1;
    q=*poly2;
    poly3= NULL;
    while(p!=NULL && q!=NULL){
        if(p->exp==q->exp){
            insend(&poly3,p->coff+q->coff,p->exp);
            p=p->next;
            q=q->next;
        }
        else{
            if(p->exp>q->exp){
                insend(&poly3,p->coff,p->exp);
                p=p->next;
            }
            else{
                insend(&poly3,q->coff,q->exp);
                q=q->next;
            }
        }
       
    }
    while(p!=NULL){
        insend(&poly3, p->coff, p->exp);
        p=p->next;
    }
    while(q!=NULL){
        insend(&poly3, q->coff, q->exp);
        q=q->next;
    }
    return poly3;
}
void ordins(struct node**start, int c,int e){
    struct node *p;
    struct node *q=NULL;
    q=NULL;
    p=*start;       
    while(p!=NULL && c>=(p->coff)){
        q=p;
        p=p->next;
    }
    if(q!=NULL){
        insaft(&q,q->next->coff,e);
    }
    else{
        insbeg(start,c,e);
    }
}
int delaft(struct node **p,int c,int e){
    int x;
    struct node *q, *r;
    q=(*p)->next;
    r=q->next;
    (*p)->next=r;
    free(q);
    return x;
}