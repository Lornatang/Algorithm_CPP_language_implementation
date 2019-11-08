#include "stack.h"
#include <iostream>
using namespace std;

Stack *construct() {
  Stack *s = (Stack *)malloc(sizeof(Stack));
  s->base = (int *)malloc(sizeof(int));
  s->top = s->base;
  return s;
}

Stack *push(Stack *s, int data) {
  *s->top++ = data;
  return s;
}

Stack *pop(Stack *s, int *data) {
  *data = *--s->top;
  return s;
}

void traverse(Stack *s) {
  int *temp = s->base;
  cout << "Stack: ";
  while (temp != s->top) {
    cout << *temp << " ";
    temp++;
  }
  cout << endl << endl;
}

int main(int argc, char const *argv[]) {
  cout << "Construction single list..." << endl;

  Stack *s = construct();

  cout << "Push operater." << endl;
  s = push(s, 1);
  traverse(s);
  s = push(s, 2);
  traverse(s);
  s = push(s, 3);
  traverse(s);
  s = push(s, 4);
  traverse(s);

  cout << "Pop operater." << endl;
  int *elem = (int *)malloc(sizeof(*elem));
  s = pop(s, elem);
  traverse(s);

  return 0;
}