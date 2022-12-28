#include <cstdlib>
#include <iostream>
using namespace std;
// void arrinsertion(int *a,int *n,int x,int i){
//         *n=*n+1;
//         // cout<<*n;
//     int j{};
//     for(j=*(n);j>=i;j--){
//         a[j+1]=a[j];
//         // cout<<"r";
//     }
//     a[i]=x;
// }
// void arrdeletion(int *a,int *n,int i){
//     for(int j=i;j<*n;j++){
//         a[j]=a[j+1];
//     }
//     *n=*n-1;
// }
// void pqinsertion(int *a,int *n,int x){
//     int i{};
//     // cout<<*n;
//     while(i<*n&&a[i]<=x){
//         i++;    
//     }
//     // cout<<i<<endl;
//     arrinsertion(a,n,x,i);
// }
// int pqdeletion(struct node *a,int *n){
//     struct node* x=a[0];
//     arrdeletion(a,n,0);
//     return x;
struct node{
    char c;
    int f;
    struct node *right;
    struct node *left;
    struct node *next;
};
struct node *createnode(char c,int f){
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node ));
    p->c=c;
    p->f=f;
}
// void enqueue(struct node *pq,struct node *x){
//     struct node*q=NULL;
//     struct node *p=pq;
//     while (x->f>=p->f) {
//     q=p;
//     p=p->next;
//     }
//     if(q==NULL){
//         x->next=pq;
//         pq=x;
//     }
//     else{
//         x->next=q->next;
//         q->next=x;
//     }
// }
void penqueue(struct node **pq,struct node *root){
    struct node*p=*pq;
    struct node*q=NULL;
    if(p==NULL){
        p=createnode(root->c,root->f);
        p->next=NULL;
    }
    while (p->f<=root->f&&p!=NULL) {
    q=p;
    p=p->next;
    }
    struct node *t=createnode(root->c,root->f);
    q->next=t;
    t->next=p;
}
struct node *dequeue(struct node *pq){
     struct node *p=pq;
    pq=pq->next;
    return p;
}
void inord_traversal(struct node *root){
    if (root==NULL) {
    return;
    }
    else{
        inord_traversal(root->left);
        cout<<root->c<<" "<<root->f<<" ";
        inord_traversal(root->right);
    }
}
struct node *huffman_coding(char c[],int f[],int n){
    
}
int main(){
    struct node *root=NULL;
    struct node *pq=NULL;
    char c[100];
    int f[100];
    int n;
    cout<<"how many elements in the tree";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c[i];
        cin>>f[i];
    }
    root=huffman_coding(c,f,n);
    inord_traversal(root);
    return 0;
}