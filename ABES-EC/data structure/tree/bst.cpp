#include "t.h"
#include <cstddef>
#include <iostream>
using namespace std;
int key = 1000;
int main() {
  struct node *root = NULL;
  bst_insert(&root, 100);
  bst_insert(&root, 50);
  bst_insert(&root, 70);
  bst_insert(&root, 20);
  bst_insert(&root, 30);
  bst_insert(&root, 150);
  bst_insert(&root, 120);
  bst_insert(&root, 105);
  bst_insert(&root, 200);
  bst_insert(&root, 170);
  bst_insert(&root, 180);
  bst_insert(&root, 290);
  postord_traversal(root);
  cout << endl;
  inord_traversal(root);
  cout << endl;
  preord_traversal(root);
  cout << endl;
  struct node *p = root->left;
  cout << "the successor of " << p->data << " is ";
  struct node *t = bst_successor(&p);
  if (t != NULL) {
    cout << t->data;
  } else {
    cout << "no successor";
  }
  cout << endl;
  cout << "the predeccessor of " << p->data << " is ";
  t = bst_predccessor(&p);
  if (t != NULL) {
    cout << t->data;
  } else {
    cout << "no predcessor";
  }
  cout << endl;
  cout << "distance_between_min_and_max: "
       << distance_between_min_and_max(root);
  cout << endl;

  return 0;
}