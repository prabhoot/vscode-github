// Recursive Creation of Binary Tree
//user defined inputs traversal
#include "t.h"
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

int main(){
    struct node *root=NULL;
    int x;
    printf("Enter the data of root node: ");
    scanf("%d",&x);
    root=makenode(x);
    create_tree(&root);
    printf("\n Pre order...-> ");
    preord_traversal(root);
    printf("\n In order...-> ");
    inord_traversal(root);
    printf("\n Post order...-> ");
    postord_traversal(root);
    return 0;
}