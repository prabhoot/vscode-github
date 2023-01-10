#include "t.h"
#include <cctype>
#include <stack>
struct node *build_exp_tree(string str, struct node *root) {
  cout<<"a";
  stack<struct node *> op;
  stack<struct node *> s;
  int i = 0;
  while (str[i] != '\0') {
    struct node *t = getnode(str[i]);
    if (isalpha(t->value)) {
      op.push(t);
    } else {
      if ((s.empty() || prcd((s.top()->value), t->value))) {
        s.push(t);
      } else {
        t->right = op.top();
        op.pop();
        t->left = op.top();
        op.pop();
        op.push(t);
      }
    }
  }
  cout<<"n";
  return op.top();
}
int main() {
  struct node *root = NULL;
  preord_traversal(root);
  string str = "a+b+c";
  struct node *t=build_exp_tree(str, root);
  inord_traversal(t);
  cout << endl;
  return 0;
}