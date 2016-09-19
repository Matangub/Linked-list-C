#include <stdio.h>
#include "list.h"

void printNodes(Node *list) {

  // printFirstNode(list);
  // printLastNode(list);
}

int main() {

  printf("hello world!\n");
  Node *list = newList();

  int a = 10;
  int *newData = &a;
  append(list, newData);
  append(list, newData);
  a = 20;
  newData = &a;
  // append(list, newData);
  // printNodes(list);
  // printListInt(list);
  //
  // int b = 15;
  // int *newData2 = &b;
  // append(list, newData2);
  // printNodes(list);

  return 0;
}
