#include <cstddef>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node{
    struct node *left;
    struct node *right;
    char data;
};
struct node *makenode (struct node *start,char x){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->left=NULL;
    p->data=x;
    p->right=NULL;
    return p;
}
void preord_traversal(struct node *start){
    if(start!=NULL) {
        cout<<start->data<<" ";
        preord_traversal(start->left);
        preord_traversal(start->right);
        }
}void postord_traversal(struct node *start){
    if(start!=NULL) {
        postord_traversal(start->left);
        postord_traversal(start->right);
        cout<<start->data<<" ";
        }
}
void inord_traversal(struct node *start){
    if(start!=NULL) {
        cout<<start->data<<" ";
        inord_traversal(start->left);
        inord_traversal(start->right);
        }
}
