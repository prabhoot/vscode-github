// Program of Array Implementaion of Linear Queue
#include <cstdlib>
#include <iostream>
#define n 4
using namespace std;
struct queue {
  int data[n];
  int front;
  int rear;
};
void initial(struct queue *q) {
  q->front = 0;
  q->rear = -1;
}
void enqueue(struct queue *q, int x) {
  if (q->rear + 1 < n) {
    q->rear++;
    q->data[q->rear] = x;
  } else {
    cout << "queue overflow\n";
    exit(1);
  }
}
int dequeue(struct queue *q) {
  if (q->front <= q->rear) {
    int x = q->data[q->front];
    q->front++;
    return x;
  } else {
    cout << "queue underflow\n";
    exit(1);
  }
}
int front_elemenet(struct queue *q) { 
    
    if(q->rear>q->front){return q->data[q->front];} 
    else {
    cout<<"no such element\n";
    exit(1);
    }
    }
bool isempty(struct queue *q) {
  if (q->front < q->rear) {
    return false;
  } else {
    return true;
  }
}
void display(struct queue q) {
  for (int i = q.front; i <= q.rear; i++) {
    cout << q.data[i] << " ";
  }
}
int main() {
  struct queue q;
  initial(&q);
 
 
    display(q);
    cout<<endl;
  cout << front_elemenet(&q)<<" ";
  dequeue(&q);
  cout << front_elemenet(&q)<<" ";
  cout<<endl;
  return 0;
}