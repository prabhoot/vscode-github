#include "t.h"
int node_count(struct node *start){
    int count=0;
    if (start!=NULL) {
    node_count(start->left);
    node_count(start->right);
    count++;
    }
}
int main(){
    struct node *root=NULL;
    root=makenode(root, 'a');
    root->left=makenode(root, 'b');
    root->right=makenode(root, 'c');
    root->right->left=makenode(root, 'd');
    root->left->left=makenode(root, 'e');
    cout<<"preord_traversal: ";
    preord_traversal(root);
    cout<<endl;
    cout<<"postord_traversal: ";
    postord_traversal(root);
    cout<<endl;
    cout<<"inord_traversal: ";
    inord_traversal(root);
    cout<<endl;
    return 0;
}