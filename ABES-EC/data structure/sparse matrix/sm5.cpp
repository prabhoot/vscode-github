// Program For Linked List Implementation of General Sparse Matrix
#include "ll.h"
#include <initializer_list>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main() {
  int mat[5][5] = {{1, 0, 2, 0, 0},
                   {0, 3, 0, 0, 2},
                   {0, 5, 3, 0, 0},
                   {0, 0, 5, 0, 0},
                   {7, 0, 0, 0, 0}};
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      struct node *p = getnode();
      p->info = mat[i][j];
      p->column = j;
      p->row = i;
      
    }
  }
  return 0;
}