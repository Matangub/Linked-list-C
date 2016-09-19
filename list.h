
typedef struct Node {
  void *data;
  void *next;
} Node;

Node *newList();

void destroyList(Node *list);

void printLastNode(Node *list);

void printFirstNode(Node *list);

void printListInt(Node *node);

Node *getFinalNode( Node *node );

void append( Node *firstNode, void *value );

void removeNode( Node* list, int index );
