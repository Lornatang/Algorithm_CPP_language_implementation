#include <iostream>
#include "list.h"
using namespace std;

SingleList *construct_single_list() {
  SingleList *node = (SingleList *)malloc(sizeof(SingleList));
  SingleList *temp = node;

  for (int i = 1; i < 5; i++) {
    SingleList *a = (SingleList *)malloc(sizeof(SingleList));
    a->elem = i;
    a->next = NULL;
    temp->next = a;
    temp = temp->next;
  }
  return node;
}

SingleList *single_list_insert(SingleList *node, unsigned index, int data) {
  SingleList *temp = node;

  for (int i = 1; i < index; i++) temp = temp->next;

  SingleList *p = (SingleList *)malloc(sizeof(SingleList));
  p->elem = data;
  p->next = temp->next;
  temp->next = p;
  return node;
}

SingleList *single_list_delete(SingleList *node, unsigned index) {
  SingleList *temp = node;
  for (int i = 1; i < index; i++) temp = temp->next;

  SingleList *p = temp->next;
  temp->next = temp->next->next;
  free(p);
  return node;
}

void dis_single_list(SingleList *node) {
  SingleList *p = node;
  cout << "List: ";
  while (p->next) {
    p = p->next;
    cout << p->elem << " ";
  }
  cout << endl << endl;
}

int main(int argc, char const *argv[]) {
  cout << "Construction single list..." << endl;

  SingleList *node = construct_single_list();
  dis_single_list(node);

  cout << "Insert elem `5` to index `5`" << endl;
  node = single_list_insert(node, 5, 5);
  dis_single_list(node);

  cout << "Insert elem `6` to index `6`" << endl;
  node = single_list_insert(node, 6, 6);
  dis_single_list(node);

  cout << "Delete index `5`" << endl;
  node = single_list_delete(node, 5);
  dis_single_list(node);

  return 0;
}
