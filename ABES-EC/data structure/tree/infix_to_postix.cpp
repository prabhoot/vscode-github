// #include <cstddef>
// #include <iostream>
// #include <stack>
// using namespace std;
// struct node {
//   struct node *left;
//   struct node *right;
//   char data;
//   // struct node *next;
// };
// void inord_traversal(struct node *root) {
//   if (root != NULL) {
//     inord_traversal(root->left);
//     cout << root->data << " ";
//     inord_traversal(root->right);
//   }
// }

// bool prcd(char a, char b) {
//   if (a == '^' || a == '*' || a == '/' || a == '%') {
//     if (b == '^') {
//       return false;
//     } else {
//       return true;
//     }
//   } else {
//     if (b == '+' || b == '-') {
//       return true;
//     } else {
//       return false;
//     }
//   }
// }

// struct node *create_tree(char x) { //(int x)
//   struct node *p;
//   p = (struct node *)malloc(sizeof(struct node));
//   p->data = x;
//   p->left = NULL;
//   p->right = NULL;
//   return p;
// }
// stack<struct node *> stackop;
// stack<char> stacksy;
// bool is_operand(char a){
//   if(a>'a'&&a<'Z'){
//     return true;
//   }
//   else {
//   return false;
//   }
// }
// struct node * build_exp_tree(string exp) {
//   int i = 0;
//   while (exp != "\0") {
//     char sym = exp[i];
//     if (is_operand(sym)) {
//       struct node *x = create_tree(sym);
//       stackop.push(x);
//     } else {
//       while (!(stacksy.empty()) && (prcd(stacksy.top(), sym))) {
//         char sy = stacksy.top();
//         stacksy.pop();
//         struct node *t = create_tree(sy);
//         struct node *b = stackop.top();
//         stackop.pop();
//         struct node *a = stackop.top();
//         stackop.pop();
//         t->left = a;
//         t->right = b;
//         stackop.push(t);
//       }
//     }
//     stacksy.push(sym);
//     while (!stacksy.empty()) {
//       char op = stacksy.top();
//       stacksy.pop();
//       struct node *t = create_tree(op);
//       struct node *b = stackop.top();
//       stackop.pop();
//       struct node *a = stackop.top();
//       stackop.pop();
//       t->left = a;
//       t->right = b;
//       stackop.push(t);
//     }
//   }
//   return stackop.top();
// }
// int main() {
//     struct node *root=NULL;
//     string str="a*b+c-d";
//     root=build_exp_tree(str);
//     inord_traversal(root);
//     return 0; }

#include <cctype>
#include <cstdlib>
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

#include <iostream>
#include <stack>

using namespace std;
string itp(string infix) {
  stack<char> s;
  int i = 0;
  string postfix = "";
  while (infix[i] != '\0') {
    if (infix[i] >= 'a' && infix[i] <= 'z' ||
        infix[i] >= 'A' && infix[i] <= 'Z') {
      postfix += infix[i];
      i++;
    } else {
      while (!s.empty() && prcd(s.top(), infix[i])) {
        postfix += s.top();
        s.pop();
      }
      s.push(infix[i]);
      i++;
    }
  }
  while (!s.empty()) {
    postfix += s.top();
    s.pop();
  }
  return postfix;
}
struct node {
  char data;
  struct node *right;
  struct node *left;
};
struct node *create_node(char x) {
  struct node *p = NULL;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  return p;
}
bool is_oprand(char input_char) {
  if ((input_char >= 65 && input_char <= 90) ||
      (input_char >= 97 && input_char <= 122))
    return true;
  return false;
}
struct node *build_expression_tree(string str) {
  stack<struct node *> s;
  int i = 0;
  while (str[i] != '\0') {
    // cout<<"a";
    struct node *t = create_node(str[i]);
    if (is_oprand(char (t->data))) {
      s.push(t);
    } else {
      struct node *r = s.top();
      s.pop();
      struct node *l = s.top();
      s.pop();
      t->left = l;
      t->right = r;
      s.push(t);
    }
    i++;
  }
  return s.top();
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
int main() {
  string str = "a+b+c";
  str = itp(str);
  cout<<str;
  cout<<endl;
  // str.append("\0");
  struct node *root = NULL;
  root = build_expression_tree(str);
  inord_traversal(root);
  cout<<endl;
  preord_traversal(root);
  cout<<endl;
  postord_traversal(root);
  return 0;
}