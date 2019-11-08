struct Node {
  int data;
  Node *next;
};

struct Queue {
  Node *front;
  Node *rear;
};

Queue *init();
Queue *push(Queue, int);
Queue *pop(Queue, int);
void traverse(Queue);