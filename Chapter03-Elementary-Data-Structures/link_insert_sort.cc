#include <iostream>
using namespace std;

struct node {
  int item;
  node* next;
  node(int x, node* t) {
    item = x;
    next = t;
  }
};

typedef node* link;

int main(int argc, char const* argv[]) {
  int i, N = atoi(const_cast<char*>(argv[1])),
         M = atoi(const_cast<char*>(argv[2]));
  node heada(0, 0);
  link a = &heada, t = a;
  for (int i = 0; i < N; i++) t = (t->next = new node(rand() % 1000, 0));
  node headb(0, 0);
  link u, x, b = &headb;
  for (t = a->next; t != 0; t = u) {
    u = t->next;
    for (x = b; x->next != 0; x = x->next)
      if (x->next->item > t->item) break;
    t->next = x->next;
    x->next = t;
  }
  return 0;
}
