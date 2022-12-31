#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <ostream>
#define size 10
using namespace std;
// **************basic initialisation********************
struct node {
  struct node *left;
  struct node *right;
  struct node *father;
  int data;
  struct node *next;
  int level;
  int height;
};
int countl = 0;
int countr = 0;
int count1 = 0;
struct node *rear, *front;
int ht[size][size] = {{0}};
int n = sizeof(ht) / sizeof(ht[0]);

inline struct node *makenode(int x) { //(int x)
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
}

// **************basic initialisation**********************

// ******************* count ***************************

inline int node_count(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    return 1 + node_count(root->left) + node_count(root->right);
  }
}

inline int count_leaf(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    if (root->left == NULL && root->right == NULL) {
      return 1;
    } else {
      return (count_leaf(root->left) + count_leaf(root->right));
    }
  }
}

inline int count_n2node(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    if (root->left == NULL && root->right == NULL) {
      return 0;
    } else {
      if (root->left != NULL && root->right != NULL) {
        return 1 + count_n2node(root->left) + count_n2node(root->right);
      } else {
        return count_n2node(root->left) + count_n2node(root->right);
      }
    }
  }
}

inline int count_n1node(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    if (root->left == NULL && root->right == NULL) {
      return 0;
    } else {
      if (root->left != NULL && root->right != NULL) {
        return count_n1node(root->left) + count_n1node(root->right);
      } else {
        return 1 + count_n1node(root->left) + count_n1node(root->right);
      }
    }
  }
}

inline int height_tree(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    if (root->left == NULL && root->right == NULL) {
      return 0;
    } else {
      return max(height_tree(root->left), height_tree(root->right)) + 1;
    }
  }
}

inline int sum_of_nodes(struct node *root) {
  if (root == NULL) {
    return 0;
  }
  return sum_of_nodes(root->left) + sum_of_nodes(root->right) + root->data;
}
// ******************* count ***************************
// ******************* validation***********************
inline bool strictly(struct node *root) {
  if (count_n1node(root) == 0) {
    return true;
  } else {
    return false;
  }
  return 0;
}

inline int complete(struct node *root) {
  if (2 * (height_tree(root)) == count_leaf(root)) {
    return 1;
  } else {
    return 0;
  }
}
// ******************* validation***********************

// *************for a queue*****************************

inline void initiate_queue() {
  rear = NULL;
  front = NULL;
}

inline void enqueue(struct node *p) {
  if (rear != NULL) {
    rear->next = p;
    rear = p;
  } else {
    rear = p;
    front = p;
  }
}

inline struct node *dequeue() {
  struct node *address_return = front;
  front = front->next;
  if (front == NULL) {
    rear = NULL;
  }
  return address_return;
}

inline bool isempty() {
  if (rear == NULL) {
    return true;
  } else {
    return false;
  }
}

inline void level_order_traversal(struct node *root) {
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
// *************for a queue********************

// *************for a hash table***************

inline void insert_in_ht_lr(struct node *root) {
  int j = 0;
  while (ht[root->level][j] != 0) {
    j++;
  }
  ht[root->level][j] = root->data;
}

inline void initiate_ht() {
  countl = 0;
  countr = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ht[i][j] = 0;
    }
  }
}

inline void display_ht() {
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

inline void display_all_ht() {
  bool flag = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int p = ht[i][j];
      cout << p << " ";
    }
    cout << endl;
  }
}

inline void create_hash_table_lr(struct node *root) {
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

inline void insert_in_ht_vtb(struct node *root) {
  int h = height_tree(root);
  int j = 0;
  while (ht[root->level + h][j] != 0) {
    j++;
  }
  ht[root->level + h][j] = root->data;
}

inline void create_hash_table_vtb(struct node *root) {
  initiate_ht();
  struct node *p = NULL;
  initiate_queue();
  root->level = 0;
  insert_in_ht_vtb(root);
  enqueue(root);
  while (!isempty()) {
    p = dequeue();
    if (p->left != NULL) {
      countl--;
      p->left->level = countl;
      enqueue(p->left);
      insert_in_ht_vtb(p->left);
      countl++;
    }
    if (p->right != NULL) {
      countr++;
      p->right->level = countr;
      enqueue(p->right);
      insert_in_ht_vtb(p->right);
    }
  }
}
// *************for a hash table***************

// *******************traversals***************************

inline struct node *clone_binary_tree(struct node *root) {
  if (root == NULL) {
    return NULL;
  }
  struct node *croot = makenode(root->data);
  croot->left = clone_binary_tree(root->left);
  croot->right = clone_binary_tree(root->right);
  return croot;
}

inline void delete_entire_tree(struct node **root) {
  if ((*root) == NULL) {
    return;
  }
  delete_entire_tree(&(*root)->left);
  delete_entire_tree(&(*root)->right);
  cout << (*root)->data << " ";
  free((*root));
}

inline void preord_traversal(struct node *root) {
  if (root != NULL) {
    cout << root->data << " ";
    preord_traversal(root->left);
    preord_traversal(root->right);
  }
}
inline void postord_traversal(struct node *root) {
  if (root != NULL) {
    postord_traversal(root->left);
    postord_traversal(root->right);
    cout << root->data << " ";
  }
}
inline void inord_traversal(struct node *root) {
  if (root != NULL) {
    inord_traversal(root->left);
    cout << root->data << " ";
    inord_traversal(root->right);
  }
}

inline void left_view_traversal(struct node *root) {
  create_hash_table_lr(root);
  int i = 0;
  while (ht[i][0] != 0) {
    cout << ht[i][0] << " ";
    i++;
  }
}
inline void right_view_traversal(struct node *root) {
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
inline void level_order_traversal_ht(struct node *root) {
  create_hash_table_lr(root);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (ht[i][j] != 0) {
        cout << ht[i][j] << " ";
      }
    }
  }
}
inline void verticle_traversal(struct node *root) {
  create_hash_table_lr(root);
  display_all_ht();
}
// ******************* traversals ***************************
// ***********************BST********************************
inline int bst_search(struct node *t, int key) {
  while (t != NULL) {
    if (t->data == key) {
      return 1;
    } else {
      if (key < t->data) {
        t = t->left;
      } else {
        t = t->right;
      }
    }
  }
  if (t == NULL) {
    return -1;
  }
  return 0;
}

inline struct node *minimum(struct node *t) {
  while (t->left != NULL) {
    t = t->left;
  }
  return t;
}
inline struct node *maximum(struct node *t) {
  while (t->right != NULL) {
    t = t->right;
  }
  return t;
}

inline struct node *bst_successor(struct node **root) {
  struct node *p = *root;
  struct node *q = NULL;
  if (p->right != NULL) {
    q = minimum(p->right);
    return q;
  } else {
    q = p->father;
    while ((q != NULL) && (q->right == p)) {
      p = q;
      q = q->father;
    }
  }
  return q;
}

inline struct node *bst_predccessor(struct node **root) {
  struct node *p = *root;
  struct node *q = NULL;
  if (p->left != NULL) {
    q = maximum(p->left);
    return q;
  } else {
    q = p->father;
    while ((q != NULL) && (q->left == p)) {
      p = q;
      q = q->father;
    }
  }
  return q;
}
inline void bst_insert(struct node **root, int x) {
  if (*root == NULL) {
    *root = makenode(x);
    (*root)->father = NULL;
    return;
  }
  struct node *p = *root;
  struct node *q = NULL;
  while (p != NULL) {
    if (x < p->data) {
      q = p;
      p = p->left;
    } else {
      q = p;
      p = p->right;
    }
  }
  if (x < q->data) {
    q->left = makenode(x);
    q->left->father = q;

  } else {
    q->right = makenode(x);
    q->right->father = q;
  }
}
inline int distance_between_min_and_max(struct node *root) {
  struct node *t = root;
  count1 = 0;
  // function for minimum
  while (t->left != NULL) {
    t = t->left;
    count1++;
  }
  while (t->right != NULL) {
    t = t->right;
    count1++;
  }
  return count1;
}

// ***********************BST********************************

// ********************rotation******************************
struct node *ll(struct node **root) {
  struct node *x = *root;
  struct node *y = x->left;
  struct node *z = y->left;
  x->right = y->left;
  y->left = x;
  *root = y;
  return y;
}
// ********************rotation******************************

// ***********************AVL********************************

// ***********************AVL********************************