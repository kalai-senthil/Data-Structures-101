struct node
{
    int data;
    struct node *next;
};
#define size sizeof(struct node)
#define LIST struct node *
LIST create(LIST, int);
LIST push(LIST, int);
int pop(LIST);
void display(LIST);
LIST insertAtBegin(LIST, int);