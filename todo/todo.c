#include "todo.h"
#include <stdio.h>
#include <string.h>
int add_todo(Todo td){
    FILE *fptr;
    fptr = fopen("list.txt", "a");
    if (!fptr){
        return 0;
    }
    strcat(td.title, " ");
    strcat(td.title, td.content);
    strcat(td.title, "\n");
    if(fprintf(fptr, "%s", td.title)){
        fclose(fptr);
        return 1;
    }else{
        fclose(fptr);
        return 0;
    }
}

void read_todo(){
    FILE *fptr;
    fptr = fopen("list.txt", "r");
    if (!fptr){
        return;
    }
    char line[100];
    while(fgets(line, 100, fptr)){
        printf("%s\n", line);
    }
    fclose(fptr);
}