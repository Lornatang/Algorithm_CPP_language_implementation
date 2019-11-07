struct SingleList {
  int elem;
  SingleList *next;
};

SingleList *construct_single_list();
SingleList *single_list_insert(SingleList, unsigned, int);
SingleList *single_list_delete(SingleList, unsigned);
void dis_single_list(SingleList);

struct DoubleList {
  int elem;
  DoubleList *prev;
  DoubleList *next;
};

DoubleList *construct_double_list();
DoubleList *double_list_insert(DoubleList, unsigned, int);
DoubleList *double_list_delete(DoubleList, unsigned);
void dis_double_list(DoubleList);
