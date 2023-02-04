// Program for Pre-Order, In-Order, Post-Order Traversal#include <cstddef>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node {
  struct node *left;
  struct node *right;
  int data;
};
struct node *makenode(int x) {
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
}
void preord_traversal(struct node *root) {
  if (root != NULL) {
    cout << root->data << " ";
    preord_traversal(root->left);
    preord_traversal(root->right);
  }
}
void postord_traversal(struct node *root) {
  if (root != NULL) {
    postord_traversal(root->left);
    postord_traversal(root->right);
    cout << root->data << " ";
  }
}
void inord_traversal(struct node *root) {
  if (root != NULL) {
    inord_traversal(root->left);
    cout << root->data << " ";
    inord_traversal(root->right);
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
  cout << "postord_traversal: ";
  postord_traversal(root);
  cout << endl;
  cout << "inord_traversal: ";
  inord_traversal(root);
  cout << endl;
  return 0;
}