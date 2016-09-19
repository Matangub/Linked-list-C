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

  int b = 20;
  int *newData2 = &b;
  append(list, newData2);

  int c = 30;
  int *newData3 = &c;
  append(list, newData3);

  int d = 40;
  int *newData4 = &d;
  append(list, newData4);
  // append(list, newData);
  // printNodes(list);
  printListInt(list);

  destroyList(list);
  
  printListInt(list);
  // printListInt(list);
  //
  // int b = 15;
  // int *newData2 = &b;
  // append(list, newData2);
  // printNodes(list);

  return 0;
}
