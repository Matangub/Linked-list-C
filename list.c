#include <malloc.h>
#include <stdio.h>
#include <stddef.h>

#include "list.h"

Node *newList(  ) {

  // Node *list = NULL;
  Node *list = malloc( sizeof(Node) );
  //
  // int *ap = malloc( sizeof(int) );
  // *ap = 5;
  // (*list).data = ap;
  // (*list).next = NULL;
  (*list).data = NULL;
  (*list).next = NULL;

  return list;
}

void destroyList(Node *list) {
  printf("Node destroyed!\n");
  Node *nextNode = (Node*) (*list).next;

  free(list);

  if( nextNode ){
    destroyList(nextNode);
  }
  // *list = NULL;
}

Node *getFinalNode(Node *list) {

  void *node = (*list).next;

  if( !node ) {

    return list;
  }
  else {

    getFinalNode((*list).next);
  }

}

void printListInt(Node *node) {

  if( node ) {
    int *value = (int*) node -> data;

    if(value) {

      printf("value:%d \n", *value);
      printListInt( node->next );
    }
  }
}

void removeNode( Node* list, int index ) {

  Node *currentNode = list;
  int myIndex = 0;

  while( currentNode ->next ) {

    if(myIndex == index) {
      free(currentNode);
      break;
    }

    currentNode = (*list).next;
    ++myIndex;
  }
}

void append( Node *list, void *value ) {


  if( !(*list).data && !(*list).next ) {
    printf("***no nodes...***\n" );
    (*list).data = value;
    (*list).next = NULL;
  }
  else {
    Node *newNode = (Node*) malloc( sizeof(Node) );
    (*newNode).data = value;
    (*newNode).next = NULL;
    printf("new node appended!\n");

    Node *finalNode = getFinalNode(list);
    (*finalNode).next = newNode;
  }
}
