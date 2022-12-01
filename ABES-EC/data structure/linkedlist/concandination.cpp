#include "circular_hll.h"
int main(){
    struct node *start=NULL;
    struct node *start1=NULL;
    insbeg(&start, 6);
    insbeg(&start, 7);
    insbeg(&start,8);
    insbeg(&start,9);
    traverse(&start);
    cout<<endl;
    insbeg(&start1, 1);
    insbeg(&start1, 2);
    insbeg(&start1,3);
    insbeg(&start1,4);
    traverse(&start1);
    struct node *temp=conc_ll(&start, &start1);
    cout<<endl;
    traverse(&temp);
    
    return 0;
}