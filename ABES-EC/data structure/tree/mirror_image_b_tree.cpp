#include "t.h"

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
  struct node *new_root=mirror_tree(root);
  cout<<"the new mirror tree is ";
  preord_traversal(new_root);
   return 0;
}