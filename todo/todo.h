#ifndef TODO_H
#define TODO_H
typedef struct {
    char title[100];
    char content[300];
} Todo;
int add_todo(Todo td);
void read_todo();
#endif