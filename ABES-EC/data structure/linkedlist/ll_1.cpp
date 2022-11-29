// Program for Linear Linked List Primitive operations
#include <iostream>
using namespace std;
struct node{
    char info;
    struct node *next ;
};
struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
void ibeg(struct node **start,char x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
char dbeg(struct node **start){
    struct node *p=*start;
    *start=p->next;
     if(p==NULL){
        cout<<"linklist underflows";
        exit(1);
    }
    char x=p->info;
    free(p);
    return x;
}
char d(struct node **start,char a){
    struct node *p=*start;
    struct node *temp;
    if(p==NULL){
        cout<<"linklist underflows";
        exit(1);
    }
    if(p->next==NULL){
        char x=dbeg(start);
        return x;
    }
    while(p->next!=NULL){
             if(p->next->info==a){
                char x=p->next->info;
                p->next=(p->next)->next;
                free(p->next);
             return x;
             }
        p=p->next;
    }
    return 0;
}
char dend(struct node **start){
    struct node *p;
    p=*start;
    while((p->next)->next!=NULL){
        p=p->next;
    }
    char x=p->info;
    p->next=NULL;
    free(p->next);
    return x;
}
void traverse(struct node **start){
    struct node *p;
    p=*start;
    if(p==NULL){
        cout<<"linklist has no elements to display";
        exit(1);
        }
    while(p!=NULL){
    cout<<p->info<<" ";
    p=p->next;
    }
    
}
void iaft(struct node **start,char a,char x){
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
void iend(struct node **start,char x){
    struct node *temp;
    temp=*start
    ;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=NULL;
    temp->next=p;
}
int main(){
    struct node *start=NULL;
    ibeg(&start,'1');
    ibeg(&start,'2');
    iaft(&start,'2','3');
    iend(&start,'4');
        traverse(&start);
cout<<endl;
    dbeg(&start);
    // cout<<endl;
    traverse(&start);
    cout<<endl;
    dend(&start);
    traverse(&start);
    cout<<endl;
    d(&start,'1');
    traverse(&start);
    d(&start,'3');
    cout<<endl;
    // traverse(&start);
    d(&start,'4');
    return 0;
}