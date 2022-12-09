#include "ll.h"
void pairwiseswapping(struct node **start){
    struct node *p;
    struct node *q;
    p=*start;
    q=(*start)->next;
        while(q!=NULL){
       int x=p->info;
        p->info=q->info;
        q->info=x;
        p=p->next;
        p=p->next;
        q=q->next;
        if(q!=NULL){
            q=q->next;        
        }
    }
}
int main(){
    struct node *start=NULL;
    insbeg(&start,2);
    insbeg(&start,3);
    insbeg(&start,29);
    insbeg(&start,4);
    insbeg(&start,5);
    insbeg(&start,6);
    insbeg(&start,7);
    traverse(&start);
    pairwiseswapping(&start);
    cout<<endl;
    traverse(&start);
    return 0;
}