#include<stdio.h>
#include<stdlib.h>

 struct node
 {
     int data;
     struct node *link;
 };

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
    print_data(head);
    return 0;
}
