#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node {
  int height;
  struct node *left;
  struct node *right;
  int data;
};
int getheight(struct node *t) {
  if (t == NULL) {
    return 0;
  } else {
    return t->height;
  }
}
struct node *createnode(int x) {
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->height = 1; // leaf node ki height code karte samay min 1 hoti hai kyo ki
                 // leaf node toh create krr dete hai phele hi.
  p->left = NULL;
  p->right = NULL;
  return p;
}
int getbalancefactor(struct node *t) {
  if (t == NULL) {
    return 0;
  } else {
    return getheight(t->left) - getheight(t->right);
  }
}
struct node *leftrotation(struct node *x) {
  struct node *y = x->right;
  struct node *z = x->left;
  struct node *a = y->left;
  y->right = x;
  x->right = a;
  y->height = max(getheight(y->left), getheight(y->right)) + 1;
  x->height = max(getheight(x->left), getheight(x->right)) + 1;
  return y;
}
struct node *rightrotation(struct node *x) {
  struct node *z = x->left;
  struct node *y = x->right;
  struct node *a = z->right;
  z->right = x;
  x->left = a;
  z->height = max(getheight(z->left), getheight(z->right)) + 1;
  x->height = max(getheight(x->left), getheight(x->right)) + 1;
  return z;
}
struct node *insert(struct node *t, int key) {
  if (t == NULL) {
    return createnode(key);
  } else if (key < t->data) {
    t->left = insert(t->left, key);
    return t->left;
  } else {
    t->right = insert(t->right, key);
    return t->right;
  }
  t->height = max(getheight(t->left), getheight(t->right)) + 1;
  int bf = getbalancefactor(t);
  // Right Right Case
  if (bf < -1 && key > t->right->data) {
    return leftrotation(t);
  }
  // Left Left Case
  if (bf > 1 && key < t->left->data) {
    return rightrotation(t);
  }
  // Left Right Case
  if (bf > 1 && key > t->left->data) {
    t->left = leftrotation(t->left);
    return rightrotation(t);
  }
  // Right Left Case
  if (bf < -1 && key < t->right->data) {
    t->right = rightrotation(t->right);
    return leftrotation(t);
  }
  return t;
}
void preord_traversal(struct node *root){
    if(root==NULL){
        return;
    }
    preord_traversal(root->left);
    cout<<root->data<<" ";
    preord_traversal(root->right);
}
int main() { 
    struct node *root=NULL;
    root=insert(root, 1);
    root=insert(root, 2);
    root=insert(root, 4);
    root=insert(root, 5);
    root=insert(root, 3);
    root=insert(root, 6);
    preord_traversal(root);
    return 0; }