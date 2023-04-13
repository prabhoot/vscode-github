// Write a program to create a copy of the given Binary Tree.
#include "t.h"
#include <cstddef>
#include <utility>
// struct node *clone_binary_tree(struct node *root) {
//   if (root == NULL) {
//     return NULL;
//   }
//   struct node *croot = makenode(root->data);
//   croot->left = clone_binary_tree(root->left);
//   croot->right = clone_binary_tree(root->right);
//   return croot;
// }
int main() {
  struct node *cloned_root = NULL;
  struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  preord_traversal(root);
  cout << endl;
  cout << "new tree:";
  cloned_root = clone_binary_tree(root);
  preord_traversal(cloned_root);
  return 0;
}