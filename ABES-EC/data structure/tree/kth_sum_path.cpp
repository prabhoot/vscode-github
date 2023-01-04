#include "t.h"
int kth_sum_path(struct node *root, vector<int> &v, int key) {
  cout<<" # ";
  if (root == NULL) {
    v.pop_back();
    cout<<"n";
    return count1;
  }
  if (v.empty() == 1) {
    cout<<"q";
    v.push_back(root->data);
  } else {
    cout<<"e";
    v.push_back(v.back() + root->data);
  }
  if (v.back() == key) {
    v.pop_back();
    cout<<"last:" <<v.back()<<" ";
    cout<<"i";
    count1+=1;
    cout<<"count:"<<count1<<" \n";
    return count1;
  }
  int a=kth_sum_path(root->left, v, key);
    // v.pop_back();
  int b=kth_sum_path(root->right, v, key);
    // v.pop_back();
    // cout<<endl;
  return countl;
}
int main() {
  struct node *root = NULL;
  vector<int> v;
  count1=0;
  root = makenode(1);
  root->left = makenode(1);
  root->right = makenode(2);
  root->left->left = makenode(2);
  root->left->right = makenode(1);
  // root->left->right->left = makenode(4);
  // root->left->right->right = makenode(5);
  // root->right->left = makenode(6);
  // root->right->left->left = makenode(5);
  root->right->right = makenode(1);
  preord_traversal(root);
  int key = 4;
  cout<<endl;
  cout<<kth_sum_path(root, v, key);
  cout<<endl;
  return 0;
}