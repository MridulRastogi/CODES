#include<iostream>
using namespace std;
/*structure can be created in and out of main both. Inside main it won't be global but outside main it will be global
    IN ORDER TO LEARN A LINKED LIST IN C++ THE THINGS REQUIRED TO LEARN FIRST ARE:
        POINTERS AND STRUCTURES
*/
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

    int n,a,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        add_at_end(head,a);
    }
    print_data(head);
    return 0;
}
