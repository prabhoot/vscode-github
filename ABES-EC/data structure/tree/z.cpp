// left right view
#include <iostream>
#include <queue>
#include <vector>
#define n 10
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
  p->level=0;
  // p->left = NULL;
  // p->right = NULL;
  return p;
}
int height(struct node *root){
  if(root==NULL){
    return 0;
  }
  if(root->left==NULL&&root->right==NULL){
    return 0;
  }
  else {
  return max(height(root->left),height(root->right))+1;
  }
}
void lrv(struct node *root){
  queue<struct node *>q;
  int h=height(root);
  vector<int>ht[h+1];
  root->level=0;
  q.push(root);
  ht[root->level].push_back(root->data);
  while (!q.empty()) {
    struct node *x=q.front();q.pop();
    if(x->left!=NULL){
      x->left->level=x->level+1;
      q.push(x->left);
      ht[x->left->level].push_back(x->left->data);
    }
    if(x->right!=NULL){
      x->right->level=x->level+1;
      q.push(x->right);
      ht[x->right->level].push_back(x->right->data);
    }
  }
  for(int i=0;i<=h;i++){
    cout<<ht[i][0]<<" ";
  }
  cout<<endl;
  for(int i=0;i<=h;i++){
    int c=ht[i].size()-1;
    cout<<ht[i][c]<<" ";
  }
}
int main(){
  struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  lrv(root);
  return 0;
}