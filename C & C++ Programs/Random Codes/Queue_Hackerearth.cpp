#include<iostream>
using namespace std;
#define max 10
void enqueue(int a[], int front, int rear)
{
    if(rear==max)
        cout<<"Queue is Full\n";
    else
    {
        cout<<"Enter element to be inserted : ";
        cin>>a[rear];
        rear++;
    }
}
void dequeue(int a[], int front, int rear)
{
    if(front==rear)
        cout<<"Queue is Empty\n";
    else if(front==rear)
    {
        cout<<a[front]<<endl;
        a[front]=0;
        front++;
    }
}
void display(int a[], int front, int rear)
{
    if(front==-1)
        cout<<"Queue is Empty\n";
    else
    {
        int temp = front;
        while(temp!=rear)
        {
            cout<<a[temp]<<endl;
            temp = (temp+1)%max;
            cout<<a[temp]<<endl;
        }
    }
}
void peek(int a[], int front, int rear)
{
    if(front==-1)
        cout<<"Queue is Empty\n";
    else

    cout<<a[front]<<endl;
}
int main()
{
    int front=-1, rear=-1, m=1, ch;
    int a[max];
    cout<<"Choose your operation : "<<endl;
    while(m==1)
    {
        cout<<endl<<"1. Enqueue \n2. Dequeue \n3. Display \n4. Peek \n5. Exit \n";
        cout<<"Operation : ";
        cin>>ch;
        switch(ch)
        {
            case 1: enqueue(a,front,rear);
            break;
            case 2: dequeue(a,front,rear);
            break;
            case 3: display(a,front,rear);
            break;
            case 4: peek(a,front,rear);
            break;
            case 5: m=2;
            break;
            default : cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    return 0;
}
