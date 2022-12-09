#include <cstddef>
#include <iostream>
initialize(struct node **rear,struct node **front){
    rear=NULL;
    front=NULL;
}
isempty(struct node **rear,struct node **front){
if(rear==NULL){
    return true;
}
else {
return false;
}
}
insfront(struct node **front,struct node **rear,int x){
    p=getnode();
    p->info=x;
    p->prev=NULL;
    p->next=front;
    if (front!=NULL) {
    front->prev;
    else{
        rear =p;
    }
    front=p;
    }
}
insrear(struct node **front,struct node **rear,int x){
    p=getnode();
    p->prev=rear;
    p->info=x;
    p->next=NULL;
    if(rear!=NULL)
    {rear->next=p;}
    else {
    front=p;
    }
    rear=p;
}
delfront(struct node **front,struct node **rear){
    if (isempty==0) {
    cout<<"void deletion\n";
    exit(1);
    }
    struct node *temp=*front;
    // front=front->next;
    int x=temp->info;
    free(temp);
    if (front==NULL) {   
        rear=NULL
    }
    else {
    front->prev=NULL;
    }
    return x;
}
delrear(struct node **front,struct node **rear){
    struct node *p=rear;
    int x=p->info;
   rear=rear->prev;
    free(p);
    if(rear==NULL){
        front=NULL;
    }
    else {
    rear->next=NULL;
    }
    return x;
}