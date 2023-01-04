#include "t.h"
#include <cstddef>

int main() {
  struct node *root1 = NULL;
  root1 = makenode(1);
  root1->left = makenode(2);
  root1->right = makenode(3);
  root1->left->left = makenode(4);
  root1->left->right = makenode(5);
  root1->right->left = makenode(6);
  root1->right->right = makenode(7);
  preord_traversal(root1);
  cout << endl;
  struct node *root2 = NULL;
  root2 = makenode(1);
  root2->left = makenode(2);
  root2->right = makenode(3);
  root2->left->left = makenode(4);
  root2->left->right = makenode(5);
  root2->right->left = makenode(6);
  root2->right->right = makenode(7);
  preord_traversal(root2);
  cout<<endl;
  cout<<"1 for identical 0 for not identical:\n";
  cout<<to_cheak_trees_identical(root1, root2);
  return 0;
}