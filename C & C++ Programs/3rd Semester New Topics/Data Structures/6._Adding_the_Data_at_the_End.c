#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main()
{
    struct node *head = NULL;
    add_at_end(head,67);        //head = pointing to the address of the first node of the linked list.
    return 0;
}
