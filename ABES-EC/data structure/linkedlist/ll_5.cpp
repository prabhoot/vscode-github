// Program to implement Linear search.
#include "ll.h"
int count=0;
struct node* searchll(struct node **start,string searchkey){
    struct node *p=*start;
    while(p!=NULL){
        count++;
        if(p->info==searchkey){
            return p;
        }
        p=p->next; 
    }
    return NULL;
}
int main(){
    struct node *l=NULL;
    int n=4;
    cout<<"how many nodes in link list??";
    // cin>>n;    
    cout<<"enter the elements of the link list";
    for(int i=0;i<n;i++){
        string x="";
        getline(cin,x);
        iend(&l,x);
    }
    // cout<<"enter the no. to search in the link list";
    traverse(&l);
    string searchkey;
    getline(cin,searchkey);
    struct node *temp=searchll(&l,searchkey);
    if(searchll(&l,searchkey)==0){
        cout<<"not found";
    }
    else{
        cout<<"found "<<temp->info<<" at "<<((count-1)%n)+1;
    }
    return 0;
}