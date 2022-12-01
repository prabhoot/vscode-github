#include "ll.h"
#include <cstddef>
void del_all_occ(struct node **start,string x){
    struct node *p=NULL;
    p=*start;
    cout<<"lets start";
    struct node *q=NULL;
    while (p->next!=NULL) {
        cout<<"m";
        if(p->info=="X"){
            if(q==NULL){
                cout<<"i";
                dbeg(start);
            // cout<<"pos p:"<<p->info<<endl;
            }
            else{
                cout<<"n";
                // p=p->next;
                // d(start,p->info);
            }
        }
    q=p;
    p=p->next;
    }
}
int main(){
    struct node *l=NULL;
    iend(&l,"X");
    iend(&l,"A");
    iend(&l,"X");
    iend(&l,"A");
    iend(&l,"B");
    iend(&l,"X");
    traverse(&l);
    del_all_occ(&l, "x");
    cout<<endl;
    traverse(&l);
    return 0;
}