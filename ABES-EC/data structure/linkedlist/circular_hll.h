#include <cstddef>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node {
  struct node *next;
  int info;
};
struct node *getnode() {
  struct node *p = NULL;
  p = (struct node *)malloc(sizeof(struct node *));
  return p;
}
void insbeg(struct node **start, int x) {
  struct node *p=NULL;
  struct node *q=*start;
  p=getnode();
  if(q==NULL){
    p->info=x;
    p->next=p;
    *start=p;
  }
  else{
    p->info=x;
    p->next=q->next;
    q->next=p;
  }
}
void insend(struct node **start, int x){
  struct node *p=*start;
  struct node *q=NULL;
  q=getnode();
  if(p==NULL){
    insbeg(start,x);
  }
  else{
    q->info=x;
    q->next=p->next;
    p->next=q;
    *start=q;
  }
}
void insaft(struct node **start,int after,int what){
    struct node *temp;
    temp=*start;
    while(temp!=NULL){
        if(temp->info==after){
            struct node *p;
            p=getnode();
            p->info=what;
            p->next=temp->next;
            temp->next=p;
            return;
            }
        temp=temp->next;
    }
}
int nodecount(struct node **start){
    struct node *p;
    p=*start;
  if (p==NULL) {
  cout<<"cant count empty ll!!"<<endl;
  exit(1);
  }
    int count=0;
    do {
      count++;
      p=p->next;
    }while (p!=*start); 
    return count;
}
void traverse(struct node **start) {
  struct node *p;
  p = *start; 
  if (p==NULL) {
  cout<<"cant display empty ll!!"<<endl;
  exit(1);
  }
  // int t=nodecount(start);  
  int t=10;
  t++;
  while (p != NULL&&t--) {
    cout << p->info << " ";
    p = p->next;
  }
}
struct node *conc_ll(struct node **start1,struct node **start2){
    struct node *p=(*start1)->next;
    struct node *q=(*start2)->next;
    (*start2)->next=p;
    (*start1)->next=q;
    // q->next=p->next;
    // p->next=q->next;
    return *start2;
}