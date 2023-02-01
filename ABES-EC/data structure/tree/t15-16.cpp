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
// in height tree 1 the leave node returns one instead of 0
int height_tree_1(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    if (root->left == NULL && root->right == NULL) {
      return 1;
    } else {
      return max(height_tree_1(root->left), height_tree_1(root->right)) + 1;
    }
  }
}
struct node *makenode(int x) {
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
}
void helper(struct node *root) {
  int h = height_tree_1(root);
  vector<int> ht[h];
  queue<struct node *> q;
  root->level = 0;
  q.push(root);
  ht[root->level].push_back(root->data);
  while (!q.empty()) {
    struct node *x = q.front();
    q.pop();
    if (x->left != NULL) {
      x->left->level = x->level + 1;
      q.push(x->left);
      ht[x->level].push_back(x->left->data);
    }
    if (x->left != NULL) {
      x->left->level = x->level + 1;
      q.push(x->left);
      ht[x->level].push_back(x->left->data);
    }
  }
  cout<<"the left view traversal is:";
   for (int i = 0; i < h; i++){
    cout<<ht[i][0]<<" ";
  }
  cout<<endl;
  cout<<"The right view traversal is:";
  for(int i=0;i<h;i++){
    int x=ht[i].size();
    cout<<ht[i][x-1];
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
helper(root);
  return 0;
}