#include "t.h"
void isleft(struct node *root){
    
}
struct node * ll(struct node *root){
  struct node *x=root;
  struct node *y=x->left;
  struct node *z=y->left;
  x->right=y->left;
  y->left=x;
  return y;
}
int balanced_factor(struct node *root) {
  static int hl, hr;
  if (root == NULL) {
    return 0;
  }
  if (root->left == NULL) {
    hl = 0;
  } else {
    hl = 1 + root->left->height;
  }
  if (root->right == NULL) {
    hr = 0;
  } else {
    hr = 1 + root->right->height;
  }
  return hl - hr;
}
struct node *avl_insertion(struct node *root, int x) {
  if (root == NULL) {
    root = makenode(x);
  } else {
    if (x < root->data) {
      root->left = avl_insertion(root->left, x);
    }
    if(balanced_factor(root)==2){
        if(x<root->left->data){
            root=ll(root);
        }
        else{
            root=lr(root);
        }
    }
  else {
  root->right=avl_insertion(root->right, x);
  if(balanced_factor(root)==-2){
    if(x>root->right->data);
    root=rr(root);
  }
  else {
  root=rl(root);
  }
  }
  }
}
int main() { return 0; }