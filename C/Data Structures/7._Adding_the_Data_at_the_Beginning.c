#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int add_at_beginning(struct node *head, int data)
{
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

int main()
{
    // FIRST NODE - INSERTING THE FIRST ELEMENT
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // SECOND NODE - INSERTING THE ELEMENT AT THE END
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;

    // ADDING THIRD NODE - INSERTING ELEMENT AT THE BEGINNING
    head = add_at_beginning(head,data);
    head->link = ptr;
    int data = 3;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d " ,ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
