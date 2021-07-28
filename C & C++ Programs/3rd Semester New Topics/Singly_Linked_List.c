#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}nodetype *left = NULL; *right = NULL, *p = NULL;
int main()
{
    p = (nodetype *)malloc(sizeof(nodetype));
    if(p!=NULL)
    {
        p->data = n;
        if(left == NULL)
        {
            left = right = p;
        }
        else
        {
            right->next = p;
            right = p;
        }
        right->next = NULL;
    return 0;
}

