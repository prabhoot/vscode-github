// Program for finding count of Nodes in Linked List
#include "ll.h"
using namespace std;
int nodecount(struct node **start){
    struct node *p;
    p=*start;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
int main(){
    struct node *l=NULL;
    insbeg(&l,3);
    insbeg(&l,3);
    insbeg(&l,3);
    insbeg(&l,3);
    insbeg(&l,3);
    del(&l, 3);
    cout<<nodecount(&l);
    return 0;
}