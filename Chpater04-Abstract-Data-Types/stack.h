struct Stack {
  int *base;
  int *top;
  int data;
};

Stack *construct();
Stack *push(Stack, int);
Stack *pop(Stack, int);
void traverse(Stack);