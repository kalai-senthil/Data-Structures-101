#include <stdio.h>
#include "list.h"
#define loop(start, start_val, end_val) for (start = start_val; start < end_val; start++)
int main()
{
    LIST head;
    int i;
    head = create(head, 5);
    loop(i, 0, 100)
    {
        head = push(head, i);
    }
    loop(i, 0, 50)
    {
        printf("%d\n", pop(head));
    }
    head = insertAtBegin(head, 100);
    display(head);
    return 0;
}