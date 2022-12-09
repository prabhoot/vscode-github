#include "poly_ll.h"
int main() {
  struct node *start = NULL;
  insend(&start, 2, 7);
  insaft(&start,2,7,3,6);
  insend(&start, 4, 5);
  traverse(&start);
  cout<<endl;
    oill(&start, 6,5 );
  // insend(&start, 7, 4); 
     traverse(&start);
    cout<<endl;
  return 0;
}