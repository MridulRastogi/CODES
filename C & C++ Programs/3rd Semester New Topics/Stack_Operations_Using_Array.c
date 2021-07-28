#include<stdio.h>
#define Max 10
int push(int A[],int top)
{
    if(top==Max-1)
        printf("STACK OVERFLOW\n");
    else
    {
        int temp;
        printf("INPUT ELEMENT:");
        scanf("%d",&temp);
        top++;
        A[top]=temp;
    }
    return top;
}
int pop(int A[],int top)
{
    if(top==-1)
        printf("STACK UNDERFLOW\n");
    else
    {
        printf("%d\n",A[top]);
        top--;
    }
    return top;
}
void replace(int A[],int top)
{
    int x;
    printf("Enter the number to be put on top : ");
    scanf("%d",&x);
    A[top]=x;
    printf("%d",A[top]);
}
int isempty(int A[],int top)
{
    if (top==-1)
        return 1;
    else
        return 0;
}
void display(int A[],int top)
{
    int temp=top;
    while(temp!=-1)
    {
        printf("Element = %d FROM Position = %d\n",A[temp],temp);
        temp--;
    }
}
int main()
{
    int stack[Max],top=-1,ch,m=1,q;
    do
    {
            printf("\n Menu \n1. Push \n2. Pop \n3. Replace \n4. Is Empty \n5. Display \n6. EXIT");
            printf("Enter your choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1: top= push(stack,top);
                break;
                case 2: top=pop(stack,top);
                break;
                case 3: replace(stack,top);
                break;
                case 4: q = isempty(stack,top);
                        if(q==1)
                            printf("STACK IS EMPTY\n");
                        else
                            printf("STACK IS NOT EMPTY\n");
                break;
                case 5: display(stack,top);
                break;
                case 6: m=2;
                break;
                default:    printf("WRONG CHOICE");
            }
    }
    while(m==1);
    return 0;
}
