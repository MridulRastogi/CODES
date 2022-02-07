#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int key;
    struct Node *next;
};

void push(struct Node** head_ref, int new_key)  // TO INSERT A KEY
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node)); // allocate node
    newNode->key  = new_key;                                           // put in the key to the newly created spot for data
    newNode->next = *head_ref;                                         // link the old node's head address to the new node's next pointer
    *head_ref     = newNode;                                           // changes the value of current head address
}

bool search(struct Node* head, int x)   // TO SEARCH A KEY
{
    struct Node* current = head;  // Initialize current
    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}

void print(struct Node* head)   // TO PRINT ALL THE ELEMENTS OF THE LINKED LIST
{
    struct Node* current = head;
    while(current != NULL)
    {
        printf("%d -> ",current->key);
        current = current->next;
    }
}

int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
    print(head);
    search(head, 11) ? printf("\nYES\n") : printf("\nNO\n");
    return 0;
}
