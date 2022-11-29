#include "ll.h"
string middle_element(struct node **start){
    struct node *t=*start;
    struct node *r=*start;
    while(r!=NULL&&(r->next)!=NULL){
        t=t->next;
        r=(r->next);
        r=(r->next);        
    }
    cout<<t->info;
    return t->info;
}
int main(){
    struct node *l=NULL;
    ibeg(&l,"3");
    ibeg(&l,"3");
    ibeg(&l,"29");
    ibeg(&l,"69");
    ibeg(&l,"3");
    ibeg(&l,"3");
    ibeg(&l,"3");  
    traverse(&l);
    cout<<endl<<"the middle element is:";
    middle_element(&l);
    return 0;
}