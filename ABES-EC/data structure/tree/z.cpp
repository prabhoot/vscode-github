
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