#include "t.h"
int main() {
  struct node *root = NULL;
  root = makenode(10);
  root->left = makenode(5);
  root->right = makenode(6);
  root->left->left = makenode(8);
  root->left->right = makenode(7);
  root->right->left = makenode(8);
  root->right->right = makenode(2);
  preord_traversal(root);
  cout << endl;
  cout << maximum_path_sum(root);
  return 0;
}