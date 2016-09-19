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
  (*list).data = NULL;
  (*list).next = NULL;

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

  // Node *myList = (Node*) node;
  // int *value = (int*) myList -> data;
  // printf( "\nLast node value: %d\n", *value );

  if( node ) {
    printf(" aaa ");
    // int *value = (int*) node -> data;
    // printf("value:%d \n", *value);
    // printListInt( node->next );
  }
}

// void printLastNode(Node *list) {
//
//   Node *myStruct;
//   int *value;
//
//   if(1) {
//
//     if( getFinalNode(list) -> data ) {
//       myStruct = (Node*) getFinalNode(list);
//       value = (int*) myStruct -> data;
//       printf( "\nLast node value: %d\n", *value );
//     }
//     else {
//       printf("\nList is empty!");
//     }
//   }
// }
//
// void printFirstNode(Node *list) {
//
//   if(1) {
//
//     if( list -> data) {
//
//       int *value = (int*) list -> data;
//
//       printf( "\nfirst node value: %d\n", *value );
//     }
//     else {
//
//       printf( "\nfirst node is empty\n" );
//     }
//   }
// }

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
