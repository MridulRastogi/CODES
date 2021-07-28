#include<stdio.h>
#define Max 10
int push(int stack[],int top)
{
    if(top==(Max-1))
        printf("STACK IS FULL\n");
    else
    {
        top++;
        printf("Enter a number : ");
        scanf("%d",&stack[top]);
    }
    return top;
}
int pop(int stack[],int top)
{
    if(top==-1)
        printf("STACK IS EMPTY\n");
    else
    {
        printf("%d\n",stack[top]);
        top--;
    }
    return top;
}
int peek(int stack[],int top)
{
    printf("%d\n",stack[top]);
    return top;
}
int display(int stack[],int top)
{
    if(top==-1)
        printf("STACK IS EMPTY\n");
    else
    {
        int temp = top;
        while(temp!=-1)
        {
            printf("Element = %d from Position = %d\n",stack[temp],temp);
            temp--;
        }
    }
    return top;
}
int replace(int stack[],int top)
{
    if(top==-1)
        printf("STACK IS EMPTY\n");
    else
    {
        int x;
        printf("Enter the element id to be replaced from : ");
        scanf("%d",&x);
        stack[top] = x;
    }
    return top;
}
int isempty(int stack[],int top)
{
    if(top==-1)
        printf("YES, STACK IS EMPTY\n");
    else
        printf("NO, STACK IS NOT EMPTY\n");
}

int main()
{
    int stack[Max],top=-1,ch,m=1;
    do
    {
        printf("\n\t Menu \n1. Push\n2. Pop \n3. Peek \n4. Display \n5. Replace \n6. Is Empty \n7. EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: top = push(stack,top);
            break;
            case 2: top = pop(stack,top);
            break;
            case 3: top = peek(stack,top);
            break;
            case 4: top = display(stack,top);
            break;
            case 5: top = replace(stack,top);
            break;
            case 6: top = isempty(stack,top);
            break;
            case 7: m=2;
            break;
            default: printf("Invalid Choice!!!");
        }
    }
    while(m==1);
    return 0;
}
