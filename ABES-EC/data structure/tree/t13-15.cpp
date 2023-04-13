// Program for Vertical Traversal, Top view, Bottom View. 
// #include <endian.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    int hd;
};
 struct node *makenode(int x) {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
}
int height(struct node *root){
  if(root==NULL){
    return 0;
  }
  if(root->left==NULL&&root->right==NULL){
    return 1;
  }
  else {
  return max(height(root->left),height(root->right)+1);
  }
}
void top_bottom_viewtraversal(struct node *root){
    queue<struct node *> q;
    int h=height(root);
    cout<<h<<endl;
    int ht_size=2*h-1;
    vector<int>ht[ht_size];
    int shift=h-1;
    q.push(root);
    root->hd=0;
    ht[root->hd+shift].push_back(root->data);
    while(!q.empty()){
      struct node *x=q.front();q.pop();
      if(x->left!=NULL){
        x->left->hd=x->hd-1;
        q.push(x->left);
        ht[x->left->hd+shift].push_back(x->left->data);
      }
      if(x->right!=NULL){
        x->right->hd=x->hd+1;
        q.push(x->right);
        ht[x->right->hd+shift].push_back(x->right->data);
      }
    }
    cout<<"Top view traversal ";
     for(int i=0;i<ht_size;i++){
    {cout<<ht[i][0]<<" ";}
  }
  cout<<endl;
  cout<<"Bottom view traversal ";
  for(int i=0;i<ht_size;i++){
    int c=ht[i].size()-1;
    cout<<ht[i][c]<<" ";
  }
  cout<<endl;
  cout<<"vertical view traversal ";
  for(int i=0;i<ht_size;i++){
    for(int j=0;j<ht[i].size();j++){
      cout<<ht[i][j]<<" ";
    }
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
  top_bottom_viewtraversal(root);
  return 0;
}