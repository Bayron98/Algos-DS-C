#ifndef LinkedList_H
#define LinkedList_H

typedef struct Node Node; 
struct Node {
    char value[5];
    Node *next_node;
};

typedef struct {
    Node *head;
} LinkedList;

LinkedList *LinkedList_init (void);

Node *createNode (char *value);

void LinkedList_add (LinkedList *linkedlist, char *value);

void LinkedList_delete (LinkedList *linkedlist, char *value);

void LinkedList_display (LinkedList *linkedlist);

int LinkedList_count (LinkedList *linkedlist);

#endif