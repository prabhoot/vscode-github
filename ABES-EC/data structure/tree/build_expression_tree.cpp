#include <cstddef>
#include <iostream>
#include <queue>
#include <string>
#include <type_traits>
using namespace std;
struct node {
  char data;
  struct node *left;
  struct node *right;
};
struct node *makenode(char x) {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
}
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
struct node *build_exp(string str) {
  queue<struct node *> a;
  queue<char> op;
  int i = 0;
  while (str[i] != '\0') {
    char sym = str[i];
    if (iswalnum(sym)) {
      struct node *x = makenode(sym);
      a.push(x);
    } else {
      while (!op.empty() && prcd(op.front(), sym)) {
        char vari = op.front();
        op.pop();
        struct node *y = makenode(vari);
        struct node *t1 = a.front();
        a.pop();
        struct node *t2 = a.front();
        a.pop();
        y->right = t2;
        y->left = t1;
        a.push(y);
      }
      op.push(sym);
    }
    i++;
  }
  while (!op.empty()) {
    char vari = op.front();
    op.pop();
    struct node *y = makenode(vari);
    struct node *t2 = a.front();
    a.pop();
    struct node *t1 = a.front();
    a.pop();
    y->right = t1;
    y->left = t2;
    a.push(y);
  }
  return a.front();
}
void inord_traversal(struct node *root) {
  if (root != NULL) {
    inord_traversal(root->left);
    inord_traversal(root->right);
    cout << root->data << " ";
  }
}
int main() {
  string str;
  str = "a+b-c*d-1";
  struct node *x = build_exp(str);
  inord_traversal(x);
  return 0;
}