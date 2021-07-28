#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;  //head = 1000

    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    head->link = current;   //head = 2000

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;   //head = 3000

    head->link->link = current;
 ///1000->2000->3000 = NULL;
    return 0;
}
