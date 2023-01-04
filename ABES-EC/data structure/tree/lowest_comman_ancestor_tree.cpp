
#include "t.h"
#include <vector>
int main(){
    struct node *root=NULL;
    vector<int>v;
    root=makenode(10);
    // create_tree(&root);
    root->left=makenode(5);
    root->right=makenode(6);
    root->left->left=makenode(8);
    root->left->right=makenode(7);
    root->right->left=makenode(8);
    root->right->right=makenode(2);
    preord_traversal(root);
    struct node *ans=lca(root, 7, 2);
    cout<<endl;
    cout<<ans->data;
    return 0;
}