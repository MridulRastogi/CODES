#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}nodetype;

nodetype *insert(nodetype *rear)
{
    int n;
    nodetype *ptr = NULL;
    ptr = (nodetype *)malloc(sizeof(nodetype));
    printf("Enter the data to be inserted : ");
    scanf("%d",&n);
    if(ptr!=NULL)
    {
        ptr->data = n;
        if(rear==NULL)
            rear = ptr;
        else
        {
            rear->next = ptr;
            rear = ptr;
        }
        rear->next = NULL;
    }
    return rear;
}

nodetype *delete(nodetype *front)
{
    nodetype * ptr = NULL;
    if(front == NULL)
    {
        printf("\nQueue is Empty.\nNothing to delete.\n");
    }
    else
    {
        printf("\nThe element that is removed from Queue :  %d\n",front->data);
        ptr = front;
        front = front->next;
        free(ptr);
    }
    return front;
}

void display(nodetype *front)
{
    if(front==NULL)
    {
        printf("\nQueue is Empty.\nNothing to Display.\n");
    }
    else
    {
        while(front!=NULL)
        {
            printf(" %d ",front->data);
            front = front->next;
        }
    }
}

int main()
{
    int ch;
    nodetype *front = NULL, *rear = NULL;
    do
    {
        printf("\n1. Insert \n2. Delete \n3. Display \n4. Exit \nEnter your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: rear = insert(rear);
                    if(front == NULL)
                        front = rear;
            break;
            case 2: front = delete(front);
                    if(front == NULL)
                        rear = NULL;
            break;
            case 3: display(front);
            break;
        }
    }
    while(ch<=3);
}
