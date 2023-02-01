#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    int level;
    int hd;
};
 struct node *makenode(int x) {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->left = NULL;
  p->right = NULL;
  return p;
}
void topview_traversal(struct node *t){
    
}
int main(){

}