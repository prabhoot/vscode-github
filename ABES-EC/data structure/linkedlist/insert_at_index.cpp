#include "ll.h"
int nodecount(struct node **start){
    struct node *p;
    p=*start;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
void isert_at_index(struct node **start,int position,int maxsize,string x){
    int flag{0};
    struct node *p=*start;
    struct node *q=NULL;
   if(position==1){
        insbeg(start,x);
        return;
   }
   else if(position==maxsize+1){
        iend(start,x);
        return;
   }
   else{ 
    if((position<=maxsize)){ 
        position--;
    while(position--){
        q=p;
        p=p->next;
        
    }
    }
    else{
        cout<<"invalid index";
        exit(1);
    }
 }    iaft(&q,q->info,x);
}
int main(){
 struct node *l=NULL;
    ibeg(&l,"1");
    ibeg(&l,"2");
    ibeg(&l,"3");
    iend(&l,"1");
    iend(&l,"2");
    iend(&l,"3");
    traverse(&l);
    int temp=nodecount(&l);
    int position{};
    cin>>position;
    isert_at_index(&l,position,temp,"29");
    cout<<endl;
    traverse(&l);
 return 0;   
}