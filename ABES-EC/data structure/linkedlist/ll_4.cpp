// Program for concatenation of Linear Linked List
#include "ll.h"
struct node * concll(struct node **l1,struct node **l2){
    struct node *p=*l1;
    struct node *q=*l2;
    if(p==NULL){
        return *l2;
    }
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q; 
    return *l1;
}
int main(){
    struct node *l1=NULL;
    struct node *l2=NULL;
    iend(&l1,"b");
    ibeg(&l1,"a");
    iaft(&l1,"b","c");
   traverse(&l1);
   cout<<endl;
    iend(&l2,"2"); 
    ibeg(&l2,"1");
    iaft(&l2,"2","3");
   traverse(&l2);
    concll(&l1,&l2);
    iaft(&l1,"2","29");
    iaft(&l2,"2","29");
    cout<<endl;
    traverse(&l1);
    return 0;
}