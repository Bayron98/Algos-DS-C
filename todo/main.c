#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "todo.h"

int main(int argc, char *argv[]){
    Todo td1;
    strcpy(td1.title, argv[1]);
    strcpy(td1.content, argv[2]);
    add_todo(td1);
    return 0;
}