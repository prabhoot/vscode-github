

// to complete in this root node is not deleted 




#include "t.h"
#include <cstddef>
#include <cstdlib>
#include <type_traits>

bool isempty(struct node *t) {
  if (t == NULL) {
    return true;
  } else {
    return false;
  }
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
  delete_entire_tree(&root);
  cout<<endl;
  cout<<root->data;
  cout<<endl;
//   cout<<root->data;
// cout<<isempty(t);
  return 0;
}