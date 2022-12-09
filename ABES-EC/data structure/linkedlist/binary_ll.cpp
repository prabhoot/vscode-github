#include <cstddef>
#include <iostream>
#include "headerfile.h"
struct node * middleelementll(struct node **start){
    struct node *t=*start;
    struct node *r=(*start)->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
    }
    struct node *start2=t->next;
    t->next=NULL;
    return t;
}
struct node * binary_search_ll(struct node **start,int key){
   while((*start)->next!=NULL){ 
    struct node *m=middleelementll(start);
    // cout<<m->info<<" ";
    if(m->info==key){
        // cout<<"N";
        return m;
    }
    else {
    if (key<m->info) {
        // cout<<"i";
    m->next=NULL;
    }
    else {
        // cout<<"z";
        (*start)=m->next;
    }
    }}
if((*start)->info==key){
    return *start;
}
else {
// cout<<"n";
return NULL;
}
    
}
int main(){
    struct node *start=NULL;
    insbeg(&start, 15);
    insbeg(&start, 13);
    insbeg(&start, 11);
    insbeg(&start, 8);
    insbeg(&start, 5);
    insbeg(&start, 3);
    insbeg(&start, 2);
    traverse(&start);
    cout<<endl;
    struct node *s=binary_search_ll(&start, 3);
    cout<<endl;
    cout<<s->info;
    return 0;
}