#include "headerfile.h"
#include <cstddef>
// void oill(struct node **start,int x){
//     struct node *p=*start;
//     struct node *q=NULL;
//     while((p!=NULL)&&((p->info)<=x)){
//         q=p;
//         p=p->next;
//     }
//     if(q==NULL){
//         insbeg(start,x);
//     }
//     else if(p==NULL){
//         insend(start,x);
//     }
//     else{
//     insaft(start, q->info, x);}
// }
int main(){
    struct node *l=NULL;
    insend(&l,2);
    insend(&l,5);
    insend(&l,7);
    insend(&l,9);
    insend(&l,15);
    traverse(&l);
    cout<<endl;
    oill(&l,6);
    traverse(&l);
    return 0;
}