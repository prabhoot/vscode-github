#include <cstddef>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node {
    struct node *front;
    struct node *rear;
    int info;
};
struct node *getnode(){
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node *));
    return p;
}
void insbeg(struct node **start, int x){
   struct node *p=getnode();
   p->front=*start;
   p->rear=NULL;
   p->info=x;
   *start=p;
}
void traverse(struct node **start){
    struct node *p=*start;
    if(p==NULL){
        cout<<"can't display empty ll";
        exit(1);
    }
    while (p->rear!=NULL) {
        cout<<p->info<<" ";
    p=p->rear;
    }
    cout<<endl;
}