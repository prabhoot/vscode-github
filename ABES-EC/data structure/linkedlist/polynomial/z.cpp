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
void traverse(struct node **start){
    struct node *p;
    p=*start;
    while(p!=NULL){
    cout<<p->coff<<"^"<<p->exp<<" ";
    p=p->next;
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
struct node *polysubll(struct node **p1, struct node **p2) {
  struct node *poly3, *p, *q;
  p = *p1;
  q = *p2;
  poly3 = NULL;
  while (p != NULL && q != NULL) {
    if (p->exp == q->exp) {
      insend(&poly3, p->coff - q->coff, p->exp);
      p = p->next;
      q = q->next;
    } else {
      if (p->exp > q->exp) {
        insend(&poly3, p->coff, p->exp);
        p = p->next;
      } else {
        insend(&poly3, q->coff, q->exp);
        q = q->next;
      }
    }
  }
  while (p != NULL) {
    insend(&poly3, p->coff, p->exp);
    p = p->next;
  }
  while (q != NULL) {
    insend(&poly3, q->coff, q->exp);
    q = q->next;
  }
  return poly3;
}
int main() {
  struct node *poly1 = NULL;
  struct node *poly2 = NULL;
  int t=3;
  while(t--){
    int a=0,b=0;
    cout<<"coff";
    cin>>a;
    cout<<"power";
    cin>>b;
    insbeg(&poly1,a,b);
  }
  cout<<"next poly\n";
    t=3;
  while(t--){
    int a=0,b=0;
    cout<<"coff";
    cin>>a;
    cout<<"power";
    cin>>b;
    insbeg(&poly2,a,b);
  }
  cout << "polynomial 1:  ";
  traverse(&poly1);
  cout << endl;
  cout << "polynomial 2:  ";
  traverse(&poly2);
  cout << endl;
  cout << "polynomials after Substraction:  ";
  poly1 = polysubll(&poly1, &poly2);
  traverse(&poly1);
  cout << endl;
  return 0;
}