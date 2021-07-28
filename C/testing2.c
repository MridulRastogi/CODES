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
       printf("Node %d = %d\n",c,ptr->data);
       ptr = ptr->link;
   }
}

int main()
{
    struct node *head = NULL;
    int n,i,a;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        head = add_at_beginning(head,a);
    }
    print_data(head);
    //add_at_end(head,67);        //head = pointing to the address of the first node of the linked list.
    return 0;
}
