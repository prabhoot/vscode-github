#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
struct node *getnode (){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void insbeg(struct node **start,int x){
    struct node *p;
    p=getnode();
    p->data=x;
    p->next=*start;
    *start=p;
}
void insend(struct node **start,int x){
    struct node * temp=*start;
    struct node *p=NULL;
    p=getnode();
    while(temp->next!=0){
        temp=temp->next;
    }
    p->data=x;
    temp->next=p;
    p->next=NULL;
}
void insaft(struct node **start,int key,int x){
    struct node *p=NULL;
    p=getnode();
    struct node *q=*start;
    while(q!=NULL){
        if(q->data==key){
            p->next=q->next;
            q->next=p;
            p->data=x;
        }
        q=q->next;
    }
}
void traversal(struct node **start){
    struct node *p;
    p=*start;
    while(p!=0){
        printf("%d ",p->data);
        p=p->next;
    }
}
int delbeg(struct node **start){
    struct node *p;
    p=*start;
    int x=p->data;
    *start=p->next;
    free(p);
    return x;
    
}
int delend(struct node **start){
    struct node *p=*start;
    while((p->next)->next!=NULL){
        p=p->next;
    }
    int x=(p->next)->data;
        p->next=NULL;
        free(p->next);
        return x;
    // struct node *q=NULL;
    // while(p->next!=0){
    //     q=p;
    //     p=p->next;
    // }
    // q->next=NULL;
    // int x=p->data;
    // free(p);
    // return x;
}
int del(struct node **start,int key){
    struct node *p=*start;
    while(p->next!=0){
        if(((p->next)->data)==key){
            int x=(p->next)->data;
            p->next=(p->next)->next;
            free(p->next->next);
            return x;
        }
        p=p->next;
    }
    return 0;
}

int main(){
    struct node *start=NULL;
    insbeg(&start,13);
     insbeg(&start,6);
    insbeg(&start,8);
    insbeg(&start,1);
    insend(&start,99);
    insaft(&start,8,69);
    delbeg(&start);
    traversal(&start);
    delbeg(&start);
    printf("\n");
    cout<<delend(&start);
    cout<<endl;
    del(&start,6);
    cout<<endl;
    traversal(&start);
    return 0;

}