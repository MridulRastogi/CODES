#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head==NULL)
    {
        printf("The Linked List is Empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("Number of Nodes = %d\n",count);
}
int main()
{
    struct node *head = NULL;
    count_of_nodes(head);
    return 0;
}
