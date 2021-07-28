#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
        ptr = ptr->link;

    ptr->link = temp;
}

void print_data(struct node *head)
{
    int c=0;
   if(head==NULL)
       printf("The Linked List is Empty.\n");
   struct node *ptr = NULL;
   ptr = head;
   while(ptr!=NULL)
   {
       c++;
       printf("Node %d = %d",c,ptr->data);
       ptr = ptr->link;
   }
}

int main()
{
    struct node *head = NULL;
    int i,a;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        add_at_end(head,a);        //head = pointing to the address of the first node of the linked list.
    }
    return 0;
}
