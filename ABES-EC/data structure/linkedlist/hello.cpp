#include <cstddef>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};
struct node *start = NULL;
struct node *getnode() {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  return p;
}
void insbeg(struct node **start,int x) {
  struct node *p;
  p = getnode();
  p->next = *start;
  p->data = x;
  *start = p;
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
    p->data=x;
    p->next=NULL;
    temp->next=p;
    
}
  // printf("ff");
  //    struct node* p,* temp;
  //    p=getnode();
  //    p->data=x;
  //   temp=start;
  //   while(temp->next!=NULL)
  //   {
  //    temp=temp->next;
  //   }
  //   temp->next=p;
  //   p->next=NULL;
}

int delstrt() {
  struct node *p;
  p = start;
  start = p->next;
  int x = p->data;
  free(p);
  return x;
}
void display() {
  struct node *temp;
  temp = start;
  while (temp->next != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

void traverse() {
  struct node *p, *temp;
  temp = start;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}
int main() {
  // insbeg(5);
  insbeg(&start,2);
  //  insbeg(4);
  //  insbeg(1);
  insend(&start,9);
  display();
  return 0;
}