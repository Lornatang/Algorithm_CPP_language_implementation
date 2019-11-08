#include "tree.h"
#include <iostream>
using namespace std;

void insert(Tree* tree, int value) {
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = value;
  node->left = NULL;
  node->right = NULL;
  if (tree->root == NULL)
    tree->root = node;
  else {
    Node* temp = tree->root;
    while (temp != NULL) {
      if (value < temp->data)
        if (temp->left == NULL)
          temp->left = node;
        else
          temp = temp->left;
      else {
        if (temp->right == NULL)

          temp->right = node;
        else
          temp = temp->right;
      }
    }
  }
}
void inorder(Node* node) {
  if (node != NULL) {
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
  }
}

int main() {
  Tree tree;
  tree.root = NULL;
  for (int i = 0; i < 5; i++) insert(&tree, i);
  inorder(tree.root);
  return 0;
}