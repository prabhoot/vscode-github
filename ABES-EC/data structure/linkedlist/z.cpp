#include "ll.h"
#include <cstddef>
int main(){
    struct node *start=NULL;
    insend(&start,2);
    insend(&start,3);
    insend(&start,4);
    travese(start);
    cout<<endl;
    rev_travese(start);
    return 0;
}