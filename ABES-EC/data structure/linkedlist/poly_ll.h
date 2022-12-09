#include <cstddef>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node {
  int info;
  int pow;
  struct node *next;
};
struct node *getnode() {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  return p;
}
void insbeg(struct node **start, int x, int e) {
  struct node *p;
  p = getnode();
  p->info = x;
  p->pow = e;
  p->next = *start;
  *start = p;
}
int delbeg(struct node **start) {
  if (*start == NULL) {
    cout << "can't delete empty ll " << endl;
    exit(1);
  }
  struct node *p = *start;
  struct node *tofree = p;
  *start = p->next;
  int temp = tofree->info;
  free(tofree);
  return temp;
}
int delend(struct node **start) {
  if (*start == NULL) {
    cout << "can't delete empty ll " << endl;
    exit(1);
  }
  struct node *p = *start;
  struct node *q = NULL;
  while (p->next != NULL) {
    q = p;
    p = p->next;
  }
  int x = p->info;
  q->next = NULL;
  free(p);
  return x;
}
int del(struct node **start, int a, int e) {
  struct node *p=*start;
  int x=0;
  struct node *q=p->next;
  struct node *r=NULL;
  while(p->next!=NULL){
    if(p->info==a){
      if(p->pow==e){
        if(r==NULL){
          x=delbeg(start);
          return x;
        }
        if(q==NULL){
          x=delend(start);
          return x;
        }
        x=p->info;
        r->next=q;
        free(p);
        return x;
      }
    }
    r=p;
    p=p->next;
    q=p->next;
  }
  return 0;
}

void traverse(struct node **start) {
  if (*start == NULL) {
    cout << "can't display empty ll!! " << endl;
  }
  struct node *p;
  p = *start;
  while (p != NULL) {
    cout << p->info << "^" << p->pow << " ";
    p = p->next;
  }
}
void insaft(struct node **start, int a, int e, int x, int y) {
  struct node *temp;
  temp = *start;
  if (temp == NULL) {
    cout << "ll is empty" << endl;
    exit(1);
  }
  while (temp != NULL) {
    if (temp->info == a) {
      if (temp->pow == e) {
        struct node *p;
        p = getnode();
        p->info = x;
        p->pow = y;
        p->next = temp->next;
        temp->next = p;
        return;
      }
    }
    temp = temp->next;
  }
}
void insend(struct node **start, int x, int e) {
  struct node *temp;
  temp = *start;
  if (temp == NULL) {
    insbeg(start, x, e);
    return;
  }
    while (temp->next != NULL) {
      temp = temp->next;
    }
    struct node *p;
    p = getnode();
    p->info = x;
    p->pow = e;
    p->next = NULL;
    temp->next = p;

}
void oill(struct node **start, int a, int e) {
  if (*start==NULL) {
  insbeg(start, a, e);
  return;
  }
  struct node *p=*start;
  struct node *q=p->next;
  struct node *r=NULL;
  while (p->next!=NULL) {
    if (p->pow<e) {
    if (r==NULL) {
    insbeg(start, a, e);
    return;
    }
    // if (q==NULL) {
    //   cout<<"n";xx
    // insend(start, a, e);
    // return;
    // }
    else{struct node *temp=NULL;
    temp=getnode();
    temp->info=a;
    temp->pow=e;
    temp->next=q;
    p->next=temp;
    }
      cout<<"n";}
    r=p;
    p=p->next;
    q=p->next;
  }


}

void revll(struct node **start) {
  struct node *c = *start;
  struct node *p = NULL;
  struct node *n = c->next;
  while (c != NULL) {
    c->next = p;
    p = c;
    c = n;
    if (n != NULL) {
      n = n->next;
    }
  }
  *start = p;
}