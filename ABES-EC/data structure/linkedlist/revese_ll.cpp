//reverse in linked list.
#include "headerfile.h"
void revll(struct node **start){
    struct node *c=*start;
    struct node *p=NULL;
    struct node *n=c->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    *start=p;
}
int main(){
    struct node *start=NULL;
    insend(&start,3);
    insend(&start,5);
    insend(&start,7);
    insend(&start,8);
    insend(&start,9);
    traverse(&start);
    cout<<endl;
    revll(&start);
    traverse(&start);
    return 0;
}