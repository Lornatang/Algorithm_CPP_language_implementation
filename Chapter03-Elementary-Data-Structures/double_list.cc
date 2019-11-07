#include <iostream>
#include "list.h"
using namespace std;

DoubleList *construct_double_list() {
  DoubleList *node = (DoubleList *)malloc(sizeof(DoubleList));
  DoubleList *temp = node;

  for (int i = 1; i < 5; i++) {
    DoubleList *new_data = (DoubleList *)malloc(sizeof(DoubleList));
    new_data->elem = i;
    new_data->prev = temp;
    temp->next = new_data;
    temp = new_data;
  }
  return node;
}

DoubleList *double_list_insert(DoubleList *node, unsigned index, int data) {
  DoubleList *temp = node;

  for (int i = 1; i < index; i++) temp = temp->next;

  DoubleList *new_data = (DoubleList *)malloc(sizeof(DoubleList));
  new_data->elem = data;

  new_data->next = temp->next;
  temp->next->prev = new_data;
  temp->next = new_data;
  new_data->prev = temp;
  return node;
}

DoubleList *double_list_delete(DoubleList *node, unsigned index) {
  DoubleList *temp = node;
  for (int i = 1; i < index; i++) temp = temp->next;

  DoubleList *del_data = temp;

  temp->next->prev = temp->prev;
  temp->prev->next = temp->next;

  free(del_data);
  return node;
}

void dis_double_list(DoubleList *node) {
  DoubleList *p = node->next;
  cout << "List: ";
  while (p) {
    cout << p->elem << " ";
    p = p->next;
  }
  cout << endl << endl;
}

int main(int argc, char const *argv[]) {
  cout << "Construction double list..." << endl;

  DoubleList *node = construct_double_list();
  dis_double_list(node);

  cout << "Insert elem `5` to index `4`" << endl;
  node = double_list_insert(node, 4, 5);
  dis_double_list(node);

  cout << "Insert elem `6` to index `5`" << endl;
  node = double_list_insert(node, 5, 6);
  dis_double_list(node);

  cout << "Delete index `4`" << endl;
  node = double_list_delete(node, 5);
  dis_double_list(node);

  return 0;
}
