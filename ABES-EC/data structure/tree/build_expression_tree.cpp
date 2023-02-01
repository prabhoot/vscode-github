#include "t.h"
#include <cstddef>
struct node *build_expression_tree(string str,struct node *root) {
  int i = 0;
  while (str[i] != NULL) {
    char x = str[i];
    struct node *root=getnode(x);
    if (65 <= x && x <= 122){
      push(s1, root);
    }
    i++;
  }
  return 0;
}
int main() {
  struct node *root = NULL;
  string str = {"a+b+c"};
  root=getnode(str[0]);
  build_expression_tree(str,root);
  return 0;
}