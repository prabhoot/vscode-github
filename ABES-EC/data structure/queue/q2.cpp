// Program of Array Implementaion of CircularQueue
#include <cstdlib>
#include <iostream>
#define size 5
using namespace std;
struct queue {
  int data[size];
  int rear;
  int front;
};
void initiate(struct queue *q) {
  q->front = size - 1;
  q->rear = size - 1;
}
void enqueue(struct queue *q, int x) {
  if ((q->rear + 1) % size == q->front) {
    cout << "no enqueue";
    exit(1);
  } else {
    q->rear = (q->rear + 1) % size;
    q->data[q->rear] = x;
  }
}
int dequeue(struct queue *q) {
  if (q->front == q->rear) {
    cout << "no dequeue";
    exit(1);
  } else {
    q->front = (q->front + 1) % size;
    return q->data[q->front];
  }
}
void display(struct queue *q) {
  for (int i = (q->front+1)%size; i != (q->rear+1)%size; i = (i + 1) % size) {
    cout << q->data[i] << " ";
  }
}
int front_element(struct queue *q) { return (q->data[(q->front + 1) % size]); }
int main() {
    struct queue q;
    initiate(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    display(&q);
    cout<<endl;
    dequeue(&q);
    dequeue(&q);
    enqueue(&q, 5);
    enqueue(&q, 6);
    display(&q);
    cout<<endl;
    cout<<front_element(&q);
    cout<<endl;
}