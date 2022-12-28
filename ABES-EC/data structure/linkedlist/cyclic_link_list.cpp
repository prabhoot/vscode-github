// Program for finding count of Nodes in Linked List
#include "ll.h"
#include <stdlib.h>
using namespace std;
int nodecount(struct node **start){
    struct node *p;
    p=*start;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }

while(p!=NULL&&key>=p->info){
    q=p;
    p=p->next;
}
if(q!=NULL){
    insaft
}




    return count;
}

bool check(struct node **l){
       struct node *r=*l;
    struct node *t=*l;
    while(1){
    t=t->next;
    r=(r->next)->next;
if(r==t){
    return 1;
    break;
}
}
return 0;
}

string starting_point(struct node **l){
    struct node *t=*l;
    struct node *r=*l;
    while(1){
        t=t->next;
        r=(r->next)->next;
        if(r==t){
            t=*l;
            while(1){
                if(t==r){
                    return t->info;
                }
                t=t->next;
                r=r->next;
            }
        }
    }
    return 0;
}
int length_cycle(struct node **start){
        // cout<<"haha";
    int count=0;
    struct node *t=*start;
    struct node *r=*start;
    if(r==t){
        cout<<"helloworld";
    }
    while(1){
        if(t==r){
            cout<<"a";
            cout<<r->info;
            t=*start;
            break;
        //     while(1){
        //         t=t->next;
        //         cout<<count++;
        //         if(r==t){
        //             break;
        //         }
        //     }
        }
        t=t->next;
        r=(r->next)->next;
        cout<<"N";
    }
        // break;
    return count;
}
int main(){
    struct node *l=NULL;

    ibeg(&l,"1");
    ibeg(&l,"2");   
    ibeg(&l,"29");
    ibeg(&l,"69");
    ibeg(&l,"4");
    ibeg(&l,"5");  
    struct node *p=l;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=l->next;
    cout<<"5 4 69 29 2 1"<<endl;
    // cout<<endl;
//  cout<<check(&l);
//  cout<<"the starting element is: "<<starting_point(&l);
cout<<"n";
 cout<<endl<<"the length of the link list is:"<<length_cycle(&l);
 cout<<"i";
  return 0;
}