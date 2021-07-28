#include<iostream>
using namespace std;
#define max 10
void enqueue(int a[], int f, int r)
{
    if((r+1)%max==f)
        cout<<"Queue is Full\n";
    else
    {
        r = (r+1)%max;
        cout<<"Enter element to be inserted : ";
        cin>>a[r];
        if(f==-1)
            f++;
    }
}
void dequeue(int a[], int f, int r)
{
    if(f==-1)
        cout<<"Queue is Empty\n";
    else if(f==r)
    {
        cout<<a[f]<<endl;
        f=-1;
        r=-1;
    }
    f = (f+1)%max;
}
void display(int a[], int f, int r)
{
    if(f==-1)
        cout<<"Queue is Empty\n";
    else
    {
        int temp = f;
        while(temp!=r)
        {
            cout<<a[temp]<<endl;
            temp = (temp+1)%max;
            cout<<a[temp]<<endl;
        }
    }
}
void peek(int a[], int f, int r)
{
    if(f==-1)
        cout<<"Queue is Empty\n";
    else
        cout<<a[f]<<endl;
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
