#include <iostream>
#define queuesize 3
using namespace std;
struct queue {
    char item[queuesize];
    int front;
    int rear;
};
void initialize(struct queue *q){
    q->front=queuesize-1;
    q->rear=queuesize-1;
}
bool isempty(struct queue *q){
    if((q->front+1)%queuesize==q->rear){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(struct queue *q,char x){
   if ((q->rear+1)%queuesize==q->front){
        cout<<"queue overflows";
        exit(1);
    }
    else{
        q->rear=(q->rear+1)%queuesize;
        q->item[q->rear]=x;
    }
}
char dequeue(struct queue *q){
    if(q->rear==q->front){
        cout<<"queue underflows";
        exit(1);
    }
    else{
        q->front=(q->front+1)%queuesize;
        return q->item[q->front];
    }
}
int main(){
struct queue q;
initialize(&q);
enqueue(&q,'a');
enqueue(&q,'b');
cout<<dequeue(&q);
cout<<dequeue(&q);
return 0;
}