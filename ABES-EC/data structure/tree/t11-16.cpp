// Program for Level Order Traversal,Vertical traversal, Top view traversal,
// Botton view traversal, Left view traversal, right view traversal.
//  Level Order Traversal can be done using queue and hashtable both.
// #include "t.h"
#include <iostream>
#define size 10
using namespace std;
struct node {
  struct node *left;
  struct node *right;
  struct node *next;
  int level;
  int data;
};
struct node *rear, *front;
int ht[size][size] = {{0}};
int n = sizeof(ht) / sizeof(ht[0]);
// *************for a queue*****************************
void initiate_queue() {
  rear = NULL;
  front = NULL;
}
void enqueue(struct node *p) {
  if (rear != NULL) {
    rear->next = p;
    rear = p;
  } else {
    rear = p;
    front = p;
  }
}
struct node *dequeue() {
  struct node *address_return = front;
  front = front->next;
  if (front == NULL) {
    rear = NULL;
  }
  return address_return;
}

bool isempty() {
  if (rear == NULL) {
    return true;
  } else {
    return false;
  }
}
void level_order_traversal(struct node *root) {
  initiate_queue();
  enqueue(root);
  struct node *p = NULL;
  while (!(isempty())) {
    p = dequeue();
    cout << p->data << " ";
    if (p->left != NULL) {
      enqueue(p->left);
    }
    if (p->right != NULL) {
      enqueue(p->right);
    }
  }
}
int countl = 0;
int countr = 0;
// *************for a queue********************

void initiate_ht() {
  countl = 0;
  countr = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ht[i][j] = 0;
    }
  }
}
void insert_in_ht_lr(struct node *root) {
  int j = 0;
  while (ht[root->level][j] != 0) {
    j++;
  }
  ht[root->level][j] = root->data;
}

void create_hash_table_lr(struct node *root) {
  initiate_ht();
  struct node *p = NULL;
  initiate_queue();
  root->level = 0;
  insert_in_ht_lr(root);
  enqueue(root);
  while (!isempty()) {
    p = dequeue();
    if (p->left != NULL) {
      countl++;
      p->left->level = countl;
      enqueue(p->left);
      insert_in_ht_lr(p->left);
    }
    if (p->right != NULL) {
      countr++;
      p->right->level = countr;
      enqueue(p->right);
      insert_in_ht_lr(p->right);
    }
  }
}
void level_order_traversal_ht(struct node *root) {
  create_hash_table_lr(root);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (ht[i][j] != 0) {
        cout << ht[i][j] << " ";
      }
    }
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

void display_ht() {
  bool flag = 0;
  for (int i = 0; i < n; i++) {
    flag = 0;
    for (int j = 0; j < n; j++) {
      int p = ht[i][j];
      if (p != 0) {
        cout << p << " ";
        flag = true;
      }
    }
    if (flag == true) {
      cout << endl;
    }
  }
}
 void left_view_traversal(struct node *root) {
  create_hash_table_lr(root);
  int i = 0;
  while (ht[i][0] != 0) {
    cout << ht[i][0] << " ";
    i++;
  }
}
 void right_view_traversal(struct node *root) {
  create_hash_table_lr(root);
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j >= 0; j--) {
      if (ht[i][j] != 0) {
        cout << ht[i][j] << " ";
        break;
      }
    }
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
  cout << "the hash table so formed:\n";
  create_hash_table_lr(root);
  display_ht();
  cout << "the level order traversal using hash table: ";
  level_order_traversal_ht(root);
  cout<<endl;
  left_view_traversal(root);
  cout << endl;
  cout << "the right view traversal is: ";
  right_view_traversal(root);
  cout << endl;
  return 0;
}