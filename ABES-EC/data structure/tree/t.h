#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <vector> 
#include <stack>
#include <ostream>
#include <queue>
#define size 10
using namespace std;
// **************basic initialisation********************
struct node {
  struct node *left;
  struct node *right;
  struct node *father;
  int data;
  char value;
  struct node *prev;
  struct node *next;
  int level;
  int height;
};
int countl = 0;
int countr = 0;
int count1 = 0;
struct node *s1 = NULL;
struct node *s2 = NULL;
struct node *rear, *front;
int ht[size][size] = {{0}};
int n = sizeof(ht) / sizeof(ht[0]);
// use makenode for int type data input with data
  struct node *makenode(int x) {
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
  }
// use getnode for the char type input type.with value
 struct node *getnode(char x) {
  struct node *p = NULL;
  p = (struct node *)malloc(sizeof(struct node));
  p->value = x;
  return p;
}
// **************basic initialisation**********************

// ******************* count ***************************

 int node_count(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    return 1 + node_count(root->left) + node_count(root->right);
  }
}

 int count_leaf(struct node *root) {
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

 int count_n2node(struct node *root) {
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

 int count_n1node(struct node *root) {
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

 int height_tree_0(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    if (root->left == NULL && root->right == NULL) {
      return 0;
    } else {
      return max(height_tree_0(root->left), height_tree_0(root->right)) + 1;
    }
  }
}

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

 int sum_of_nodes(struct node *root) {
  if (root == NULL) {
    return 0;
  }
  return sum_of_nodes(root->left) + sum_of_nodes(root->right) + root->data;
}
 int distance_between_min_and_max(struct node *root) {
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
 int diameter_tree(struct node *root) {
  if (root == NULL) {
    return 0;
  } else {
    int d1 = height_tree_1(root->left) + height_tree_1(root->right) + 1;
    int d2 = diameter_tree(root->left);
    int d3 = diameter_tree(root->right);
    int max_diameter = max(d1, max(d2, d3));
    return max_diameter;
  }
}
 int maximum_path_sum(struct node *t) {
  if (t == NULL) {
    return 0;
  } else {
    if ((t->left == NULL) && (t->right == NULL)) {
      return t->data;
    } else {
      int l = maximum_path_sum(t->left);
      int r = maximum_path_sum(t->right);
      int m = max(l, r);
      return t->data + m;
    }
  }
  return 0;
}
 struct node *lca(struct node *t, int x, int y) {
  if (t == NULL) {
    return NULL;
  } else {
    if (t->data == x || t->data == y) {
      return t;
    } else {
      struct node *l = lca(t->left, x, y);
      struct node *r = lca(t->right, x, y);
      if (l == NULL) {
        return r;
      } else if (r == NULL) {
        return l;
      } else {
        return t;
      }
    }
  }
}
// ******************* count ***************************
// ******************* validation***********************
 bool strictly(struct node *root) {
  if (count_n1node(root) == 0) {
    return true;
  } else {
    return false;
  }
  return 0;
}

 int complete(struct node *root) {
  if (2 * (height_tree_0(root)) == count_leaf(root)) {
    return 1;
  } else {
    return 0;
  }
}
 bool to_cheak_trees_identical(struct node *root1, struct node *root2) {
  if (node_count(root1) != node_count(root2)) {
    return false;
  }
  if (root1 == NULL || root2 == NULL) {
    return 0;
  }
  if (root1->data == root2->data) {
    to_cheak_trees_identical(root1->left, root2->left);
    to_cheak_trees_identical(root1->right, root2->right);
  } else {
    cout << "the trees are not equal\n";
    exit(1);
  }
  return true;
}
// ******************* validation***********************

 void create_tree(struct node **root) {
  bool choice;
  int x;
  struct node *p = NULL;
  cout << "whether the left of " << (*root)->data << " exists or not (1/0)"
       << endl;
  cin >> choice;
  if (choice == 1) {
    cout << "input data of the left " << endl;
    cin >> x;
    p = makenode(x);
    (*root)->left = p;
    create_tree(&p);
  }
  cout << "whether the right of " << (*root)->data << " exists or not (1/0)"
       << endl;
  cin >> choice;
  if (choice == 1) {
    cout << "input data of the right " << endl;
    cin >> x;
    p = makenode(x);
    (*root)->right = p;
    create_tree(&p);
  }
}

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
// *************for a queue********************

// *************for a hash table***************

 void insert_in_ht_lr(struct node *root) {
  int j = 0;
  while (ht[root->level][j] != 0) {
    j++;
  }
  ht[root->level][j] = root->data;
}

 void initiate_ht() {
  countl = 0;
  countr = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ht[i][j] = 0;
    }
  }
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

 void display_all_ht() {
  bool flag = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int p = ht[i][j];
      cout << p << " ";
    }
    cout << endl;
  }
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

 void insert_in_ht_vtb(struct node *root) {
  int h = height_tree_0(root);
  int j = 0;
  while (ht[root->level + h][j] != 0) {
    j++;
  }
  ht[root->level + h][j] = root->data;
}

 void create_hash_table_vtb(struct node *root) {
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

// *******************************stack*******************************
// input output in the form of nodes.
 void initiate_stack() {
  s1 = NULL;
  s2 = NULL;
}
 void push(struct node **start, struct node **root) {

  if (*start == NULL) {
    *start = *root;
    (*start)->next = NULL;
    (*start)->prev = NULL;
    return;
  }

  while ((*start)->next != NULL) {
    (*start) = (*start)->next;
  }
  (*start)->next = (*root);
  (*root)->prev = (*start);
  (*root)->next = NULL;
  (*start) = (*root);
}
 struct node *pop(struct node **start) {
  if ((*start) == NULL) {
    cout << "\ncan't delete empty stack    \n!!!!!!!!!!!!!compilation "
            "terminted!!!!!!!!!!!!!!\n";
    exit(1);
  }
  if ((*start)->prev == NULL) {
    struct node *x = (*start);
    (*start) = NULL;
    return x;
  } else {
    (*start) = (*start)->prev;
    struct node *x = (*start)->next;
    (*start)->next = NULL;
    return x;
  }
}
// *******************************stack*******************************

 bool prcd(char a, char b) {
  if (a == '^' || a == '*' || a == '/' || a == '%') {
    if (b == '^') {
      return false;
    } else {
      return true;
    }
  } else {
    if (b == '+' || b == '-') {
      return true;
    } else {
      return false;
    }
  }
}

// *******************traversals***************************

 struct node *clone_binary_tree(struct node *root) {
  if (root == NULL) {
    return NULL;
  }
  struct node *croot = makenode(root->data);
  croot->left = clone_binary_tree(root->left);
  croot->right = clone_binary_tree(root->right);
  return croot;
}
 struct node *mirror_tree(struct node *root) {
  if (root == NULL) {
    return NULL;
  }
  struct node *nroot = makenode(root->data);
  nroot->left = mirror_tree(root->right);
  nroot->right = mirror_tree(root->left);
  return nroot;
}
 void delete_entire_tree(struct node **root) {
  if ((*root) == NULL) {
    free(*root);
    return;
  }
  // also add the root=NULL after the funtion call as this function will not delete the root node.
  delete_entire_tree(&(*root)->left);
  delete_entire_tree(&(*root)->right);
  cout << (*root)->data << " ";
  free((*root));
}

 void preord_traversal(struct node *root) {
  if (root != NULL) {
    cout << root->data << " ";
    preord_traversal(root->left);
    preord_traversal(root->right);
  }
}
 void postord_traversal(struct node *root) {
  if (root != NULL) {
    postord_traversal(root->left);
    postord_traversal(root->right);
    cout << root->data << " ";
  }
}
 void inord_traversal(struct node *root) {
  if (root != NULL) {
    inord_traversal(root->left);
    cout << root->data << " ";
    inord_traversal(root->right);
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
 void verticle_traversal(struct node *root) {
  create_hash_table_lr(root);
  display_all_ht();
}
// ******************* traversals ***************************
// ***********************BST********************************
 int bst_search(struct node *t, int key) {
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

 struct node *minimum(struct node *t) {
  while (t->left != NULL) {
    t = t->left;
  }
  return t;
}
 struct node *maximum(struct node *t) {
  while (t->right != NULL) {
    t = t->right;
  }
  return t;
}

 struct node *bst_successor(struct node **root) {
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

 struct node *bst_predccessor(struct node **root) {
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
 void bst_insert(struct node **root, int x) {
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