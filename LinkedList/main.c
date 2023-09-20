#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "LinkedList.h"
int main(int argc, char *argv[])
{
    LinkedList *linkedlist = LinkedList_init();
    for (int i = 1; i < argc; i++)
    {
        LinkedList_add(linkedlist, argv[i]);
    }

    LinkedList_display(linkedlist);
    printf("Le nombre des éléments de la liste: %d\n", LinkedList_count(linkedlist));

    while (1)
    {
        char value[5];
        printf("Quel élément souhaitez-vous supprimer ?\n");
        scanf("%s", value);
        LinkedList_delete(linkedlist, value);
        LinkedList_display(linkedlist);
        printf("Le nombre des éléments de la liste: %d\n", LinkedList_count(linkedlist));
    }
    return EXIT_SUCCESS;
}