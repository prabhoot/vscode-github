#include "circular_hll.h"
#include <cstddef>
void delete_head(struct node **start){
    struct node *p=*start;
    // struct node *q=p->next;
    if(p==NULL){
        cout<<"ll under flows!!"<<endl;
        exit(1);
    }
    // struct node *to_free=q;
    // p->next=q->next;
    // free(to_free);
}
int main(){
    struct node *start=NULL;
    insbeg(&start, 4);
    insbeg(&start, 2);
    insbeg(&start,29);
    insbeg(&start,8);
    traverse(&start);
    cout<<"\nnode count is";
    cout<<endl<<nodecount(&start)<<endl;
    traverse(&start);
    cout<<endl;
    delete_head(&start);
    traverse(&start);
    delete_head(&start);
    delete_head(&start);
    delete_head(&start);
    cout<<endl;
    traverse(&start);
    return 0;
}