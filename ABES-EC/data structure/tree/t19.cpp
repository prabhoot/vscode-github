// wrirte a program to check the two given binary tree is identical or not(structure as well as node value)
#include "t.h"
// bool to_cheak_trees_identical(struct node *root1, struct node *root2) {
//   if (node_count(root1) != node_count(root2)) {
//     return false;
//   }
//   if (root1 == NULL || root2 == NULL) {
//     return 0;
//   }
//   if (root1->data == root2->data) {
//     to_cheak_trees_identical(root1->left, root2->left);
//     to_cheak_trees_identical(root1->right, root2->right);
//   } else {
//     cout << "the trees are not equal\n";
//     exit(1);
//   }
//   return true;
// }
int main() {
  struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(1);
  root->right = makenode(3);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  struct node *root2 = NULL;
  root2 = makenode(1);
  root2->left = makenode(2);
  root2->right = makenode(3);
  root2->left->left = makenode(4);
  root2->left->right = makenode(5);
  root2->right->left = makenode(6);
  root2->right->right = makenode(7);
  cout<<to_cheak_trees_identical(root, root2);
  return 0;
}