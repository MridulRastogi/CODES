#include<stdio.h>
#include<stdlib.h>

typedef struct node         //structure of node
{
    int data;
    struct node *next;
}nodetype;                //Ptr = 20a

int main()
{
    nodetype A,B,C,D,*Ptr=NULL;
    A.data = 10;    //Assigning the Nodes some values.
    B.data = 20;    //Assigning the Nodes some values.
    C.data = 30;    //Assigning the Nodes some values.
    D.data = 40;    //Assigning the Nodes some values.

    A.next = &B;    //Assigning each and every node the address the address of very next Node.
    B.next = &C;    //Assigning each and every node the address the address of very next Node.
    C.next = &D;    //Assigning each and every node the address the address of very next Node.
    D.next = NULL;  //Assigning the NULL value because of D being the last Node.

    Ptr = &A;   //Assigning address of first node to pointer Ptr
    while(Ptr!=NULL)
    {
        printf("%d-->",Ptr->data);
        Ptr = Ptr->next;
    }
    return 0;
}

