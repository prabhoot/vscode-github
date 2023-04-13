// write a program to delete to entire binary tree.
#include "t.h"
//  void delete_entire_tree(struct node **root) {
//   if ((*root) == NULL) {
//     return;
//   }
//   delete_entire_tree(&(*root)->left);
//   delete_entire_tree(&(*root)->right);
//   cout << (*root)->data << " ";
//   free((*root));
// }
int main() {
  struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  delete_entire_tree(&root);
  root=NULL;
  cout<<endl;
  return 0;
}