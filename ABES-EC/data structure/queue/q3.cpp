// Program for ArrayImplementation of Double Ended Queue
// input and output from both the ends are possible in Double Ended Queue.
#include <cstdlib>
#include <iostream>
#define size 5
using namespace std;
struct DEqueue{
    int data[size];
    int front ;
    int rear;
};
void initial(struct DEqueue *q){
    q->front=size -1;
    q->rear=size -1;
}
int inc(int a){
    return a=(a+1)%size;
}
int dec(int a){
    if(a==0){
        return size-1;
    }
    return a=(a-1);
}
void f_enqueue(struct DEqueue *q,int x){
    if(inc(q->front)==q->rear){
        cout<<"no f_enqueue";
        exit(1);
    }
    else {
    q->data[q->front]=x;
    q->front=inc(q->front);
    }
}
int f_dequeue(struct DEqueue *q){
    if(q->front==q->rear){
        cout<<"no f_dequeue";
        exit(1);
    }
    else {
    q->front=dec(q->front);
    int x=q->data[q->front];
    return x;
    }
}
void r_enqueue(struct DEqueue *q,int x){
    if(dec(q->rear)==q->front){
        cout<<"no r_enqueue ";
        exit(1);
    }
    else {
    q->rear=dec(q->rear);
    q->data[q->rear]=x;
    }
}
int r_dequeue(struct DEqueue *q){
    if((q->rear)==q->front){
        cout<<"no r_dequeue";
        exit(1);
    }
    else {
    int x=q->data[q->rear];
    q->rear=inc(q->rear);
    return x;
    }
}
void display(struct DEqueue *q){
    for(int i=dec(q->front);i!=dec(q->rear);i=dec(i)){
        cout<<q->data[i]<<" ";
    }
}
void front_element(struct DEqueue *q){
    if(q->front==q->rear){
        cout<<"no front";
        exit(1);
    }
    cout<< q->data[dec(q->front)]<<" ";
}
void rear_element(struct DEqueue *q){
    if(q->rear==q->front){
        cout<<"no rear";
        exit(1);
    }
    cout<< q->data[q->rear]<<" ";
}
int main(){
    struct DEqueue q;
    initial(&q);
    f_enqueue(&q, 1);
    f_enqueue(&q, 2);
    r_enqueue(&q, 3);
    r_enqueue(&q, 4);
    display(&q);
    cout<<endl;
    return 0;
}