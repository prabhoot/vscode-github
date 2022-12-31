#include "t.h"
#include <cstddef>
bool to_cheak_trees_identical(struct node *root1,struct node *root2){
    if (root1==NULL||root2==NULL) {
    return 1;
    }
    if (root1->data==root2->data) {
    to_cheak_trees_identical(root1->left,root2->left);
    to_cheak_trees_identical(root1->right,root2->right);
    return true;
    }
    return false;
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
  struct node *root2 = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
                        preord_traversal(root);

                        return 0;
                        }