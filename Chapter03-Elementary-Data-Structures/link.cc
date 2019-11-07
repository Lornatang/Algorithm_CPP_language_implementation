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

int main(int argc, char const * argv[]) {
  int i, N = atoi(const_cast<char*>(argv[1])), M = atoi(const_cast<char *>(argv[2]));
  link t = new node(1, 0);
  t->next = t;
  link x = t;
  for (i = 2; i <= N; i++) x = (x->next = new node(i, t));
  while (x != x->next) {
    for (i = 1; i < M; i++) x = x->next;
    x->next = x->next->next;
  }
  cout << x->item << endl;
}