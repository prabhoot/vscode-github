// Program to insert an item at any given position in the linked List
#include "ll.h"
int main(){
    struct node *l=NULL ;
    ibeg(&l,"1");
    ibeg(&l,"2");
    ibeg(&l,"3");
    iend(&l,"1");
    iend(&l,"2");
    iend(&l,"3");
    traverse(&l);
    cout<<endl;
    iaft(&l,"2","29");
    traverse(&l);
    return 0;
}