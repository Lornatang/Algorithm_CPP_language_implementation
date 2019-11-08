#include "queue.h"
#include <iostream>
using namespace std;

Queue *init() {
  Node *node = (Node *)malloc(sizeof(Node));
  node->next = nullptr;

  Queue *p = (Queue *)malloc(sizeof(Queue));
  p->front = p->rear = node;
  return p;
}

Queue *push(Queue *node, int data) {
  Queue *temp = node;
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = data;
  temp->rear->next = p;
  temp->rear = p;
  return node;
}

Queue *pop(Queue *node, int *elem) {
  *elem = node->front->next->data;
  Node *temp = node->front->next;
  node->front->next = temp->next;
  if (temp == node->rear->next) node->rear = node->front;
  free(temp);
  return node;
}

void traverse(Queue *node) {
  Node *p = node->front->next;
  cout << "Queue: ";
  while (p) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl << endl;
}

int main(int argc, char const *argv[]) {
  cout << "Construction single list..." << endl;

  Queue *q = init();

  cout << "Push operater." << endl;
  q = push(q, 1);
  traverse(q);
  q = push(q, 2);
  traverse(q);
  q = push(q, 3);
  traverse(q);
  q = push(q, 4);
  traverse(q);

  cout << "Pop operater." << endl;
  int *elem = (int *)malloc(sizeof(*elem));
  q = pop(q, elem);
  traverse(q);

  return 0;
}
