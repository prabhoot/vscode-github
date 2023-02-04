// left view right view
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct node {
  int data;
  int level;
  struct node *left;
  struct node *right;
};
struct node *makenode(int x) {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  return p;
}
int height(struct node *root) {
  if (root == NULL) {
    return 0;
  }
  if (root->right == NULL && root->left == NULL) {
    return 1;
  }
  return max(height(root->left), height(root->right) + 1);
}
void left_right_traversal(struct node *root) {
  queue<struct node *> q;
  int h = height(root);
  vector<int> ht[h];
  root->level = 0;
  q.push(root);
  ht[root->level].push_back(root->data);
  while (!q.empty()) {
    struct node *x = q.front();
    q.pop();
    if (x->left != NULL) {
      x->left->level = x->level + 1;
      q.push(x->left);
      ht[x->left->level].push_back(x->left->data);
    }
    if (x->right != NULL) {
      x->right->level = x->level + 1;
      q.push(x->right);
      ht[x->right->level].push_back(x->right->data);
    }
  }
  cout << "The left view traversal is: ";
  for (int i = 0; i < h; i++) {
    cout << ht[i][0] << " ";
  }
  cout << endl;
  cout << "The right view traversal is: ";
  for (int i = 0; i < h; i++) {
    int x = ht[i].size() - 1;
    cout << ht[i][x] << " ";
  }
  cout<<endl;
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
  left_right_traversal(root);
}