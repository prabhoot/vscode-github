//reverse in linked list.
#include "headerfile.h"
void revll(struct node **start){
    struct node *p=*start;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=*start;
    *start=p;
}
int main(){
    struct node *start=NULL;
    insend(&start,3);
    insend(&start,5);
    insend(&start,7);
    insend(&start,8);
    insend(&start,39);
    traverse(&start);
    revll(&start);
    cout<<((start->next->info));
    return 0;
}