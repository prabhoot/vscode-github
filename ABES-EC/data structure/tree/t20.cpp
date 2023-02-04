// write a program to find out mirror image of given binary tree.
#include "t.h"
 struct node *mirror_tree(struct node *root) {
  if (root == NULL) {
    return NULL;
  }
  struct node *nroot = makenode(root->data);
  nroot->left = mirror_tree(root->right);
  nroot->right = mirror_tree(root->left);
  return nroot;
}
int main() {
  struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  preord_traversal(root);
  cout<<endl;
  cout<<"New mirror tree: ";
  struct node *new_root=mirror_tree(root);
  preord_traversal(new_root);
  cout<<endl;
  return 0;
}