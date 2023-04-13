// Program to find Node Count, Leaf Node count, count of 1st child, 2nd child, height, sum of all nodes in the Binary Tree.
// this while not work because when u comment the functions from the main header file it will show error so, comment the function in this programs instead.
#include "t.h"
 
int main(){
      struct node *root = NULL;
  root = makenode(1);
  root->left = makenode(2);
  root->right = makenode(3);
  root->right->left = makenode(6);
  root->right->right = makenode(7);
  root->left->left = makenode(4);
  root->left->right = makenode(5);
  cout << "no. of nodes in the tree is:  " << node_count(root) << endl;
  cout << "no. of leaf node in the tree is:  " << count_leaf(root) << endl;
  cout << "no. of n1 node in the tree is:  " << count_n1node(root) << endl;
  cout << "no. of n2 node in the tree is:  " << count_n2node(root) << endl;
  cout << "to find the sum of nodes:  " << sum_of_nodes(root) << endl;
  cout << "height of the tree:  " << height_tree_0(root) << endl;
}