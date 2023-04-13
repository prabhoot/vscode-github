// Program to Find if the given Binary Tree is complete,strictly
// this while not work because when u comment the functions from the main header file it will show error so, comment the function in this programs instead.
#include "t.h"
 bool strictly(struct node *root) {
  if (count_n1node(root) == 0) {
    return true;
  } else {
    return false;
  }
  return 0;
}
 int complete(struct node *root) {
  if (2 * (height_tree_0(root)) == count_leaf(root)) {
    return 1;
  } else {
    return 0;
  }
}
int main() {
  struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
   cout << "preord_traversal: ";
  preord_traversal(root);
  cout << endl;
  cout << "to check the tree is strict or not:  " << strictly(root) << endl;
  cout << "to check the tree is complete or not:  " << complete(root) << endl;
  return 0;
}