//merge point in ll
#include "ll.h"
#include <cmath>
#include <cstddef>

int main(){
    struct node *start1=NULL;
    struct node *start2=NULL;
    insend(&start1, 5);
    insend(&start1, 4);
    insend(&start1, 3);
    insend(&start1, 2);
    insend(&start1, 1);
    insend(&start2, 7);
    insend(&start2, 8);
    insend(&start2, 9);
    insend(&start2, 10);
    struct node *p=start1;
    struct node *q=start2;
    traverse(&start1);
    cout<<endl;
    traverse(&start2);
    cout<<endl;
    int t=4;
    while(t--){
        p=p->next;
    }
    while (q->next!=NULL) {
    q=q->next;
    }
    q->next=p;
    traverse(&start2);
    // cout<<length_ll(&start1);
    cout<<endl;
    struct node *a=merge_point_ll(&start1, &start2);
    cout<<a->info;
    return 0;
}