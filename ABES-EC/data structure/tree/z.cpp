#include <cstdlib>
#include <iostream>
using namespace std;
  struct node{
    int data;
    struct node *prev;
    struct node *next;    
  };
  struct node *getnode(int x){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node*));
    p->data=x;
    return p;
  }
  void insert(struct node *start,int x){
    if(start==NULL){
      struct node *p=getnode(x);
      p->prev=start;
      p->next=NULL;
    }
    else {
    }
  }
int main(){
  return 0;
}