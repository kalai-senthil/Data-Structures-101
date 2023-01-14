#include "list.h"
#include <stdlib.h>
#include <stdio.h>
LIST create(LIST head, int d)
{
    if (head != NULL)
    {
        struct node *t = malloc(size);
        t->data = d;
        t->next = NULL;
        return t;
    }
    return NULL;
}
LIST push(LIST list, int d)
{
    LIST new_node = malloc(size);
    new_node->data = d;
    new_node->next = NULL;
    if (list == NULL)
        return new_node;
    LIST temp = list;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    return list;
}

int pop(LIST list)
{
    if (list == NULL)
    {
        exit(0);
    }
    LIST temp = list;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    int d = temp->next->data;
    LIST delete = temp->next;
    temp->next = NULL;
    free(delete);
    return d;
}
void display(LIST list)
{
    if (list == NULL)
    {
        exit(0);
    }
    LIST temp = list;
    while (temp->next != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}

LIST insertAtBegin(LIST list, int d)
{
    LIST new_node = malloc(size);
    new_node->data = d;
    if (list == NULL)
    {
        new_node->next = NULL;
    }
    else
    {
        new_node->next = list;
    }
    return new_node;
}