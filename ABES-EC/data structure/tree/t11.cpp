// level_order_traversal
#include <iostream>
#include <queue>
using namespace std;
struct node {
  int data;
  struct node *left;
  struct node *right;
};
void levelordertraversal(struct node *t) {
  queue<struct node *> q;
  q.push(t);
  while (!q.empty()) {
    struct node *x = q.front();
    q.pop();
    if (x->left != NULL) {
      q.push(x->left);
    }
    if (x->right != NULL) {
      q.push(x->right);
    }
    cout << x->data << " ";
  }
}
struct node *makenode(int x) {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
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
  cout<<"The level order traversal is: \n";
  levelordertraversal(root);
  cout<<endl;
  return 0;
}
