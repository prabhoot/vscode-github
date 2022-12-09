#include "headerfile.h"
#include <cstddef>
int main(){
    struct node *start=NULL;
    insbeg(&start, 2);
    insbeg(&start, 3);
    insbeg(&start, 5);
    insbeg(&start, 7);
    traverse(&start);
    cout<<endl;
    struct node *start2=splitll(&start);
    traverse(&start2);
    return 0;
}