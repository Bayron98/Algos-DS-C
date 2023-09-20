#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
LinkedList *LinkedList_init (void){
    LinkedList *linkedlist = (LinkedList *)malloc(sizeof(LinkedList));
    linkedlist->head = NULL;
    return linkedlist;
}

Node *createNode (char *value){
    Node *node = (Node *)malloc(sizeof(Node));
    strcpy(node->value, value);
    node->next_node = NULL;
    return node;
}


void LinkedList_add (LinkedList *linkedlist, char *value){
    if (linkedlist->head == NULL){
        linkedlist->head = createNode(value);
    }else{
        Node *current = linkedlist->head;
        while (current->next_node != NULL){
            current = current->next_node;
        }
        current->next_node = createNode(value);
    }
}

void LinkedList_delete (LinkedList *linkedlist, char *value){
    if (linkedlist->head == NULL){
        return;
    }else{
        Node *current = linkedlist->head;
        if(strcmp(current->value, value) == 0){
            linkedlist->head = current->next_node;
        }else{
            Node *before = NULL;
            while (current != NULL){
                if(strcmp(current->value, value) == 0){
                    before->next_node = current->next_node;
                    return;
                }else{
                    before = current;
                    current = current->next_node;
                }
            }
        }
    }

}

void LinkedList_display (LinkedList *linkedlist){
    if (linkedlist->head == NULL){
        printf("Liste vide\n");
    }else{
        Node *current = linkedlist->head;
        while (current != NULL){
            printf("%s ",current->value);
            current = current->next_node;
        }
        printf("\n");
    }
}

int LinkedList_count (LinkedList *linkedlist){
    if (linkedlist->head == NULL){
        return 0;
    }else{
        int count = 0;
        Node *current = linkedlist->head;
        while (current != NULL){
            count ++;
            current = current->next_node;
        }
        return count;
    }
}