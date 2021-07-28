#include<iostream>
#define Max 10
using namespace std;
struct queue
{
    int a[Max], f, r;
}s;

void insert();
void dequeue();
void display();

int main()
{
    s.f=-1;
    s.r=-1;
    int ch;
    while (ch!=4)
    {
        cout<<endl<<" Menu \n1. Enqueue \n2. Dequeue \n3. Display \n4. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:  insert();
            break;
            case 2:  dequeue();
            break;
            case 3:  display();
            break;
            case 4:
            break;
            default: cout<<"    Wrong Choice!   ";
        }
    }
}
void insert()
{
    int item;
    if (s.r == Max-1)
        cout<<endl<<"    QUEUE OVERFLOW     "<<endl;
    else
    {
        if (s.f== -1)
        s.f=0;
        cout<<endl<<"Enter the element you want to insert : ";
        cin>>item;
        s.r+=1;
        s.a[s.r]=item;
    }
}
void dequeue()
{
    if (s.f== -1 || s.f>s.r)
    {
        cout<<endl<<"    QUEUE UNDERFLOW      "<<endl;
        return ;
    }
    else
    {
        cout<<" Deleted Element is : "<<s.a[s.f]<<endl;
        s.f+=1;
    }
}
void display()
{
    int i;
    if (s.f==-1)
        cout<<" Queue is empty "<<endl;
    else
    {
        cout<<" Queue is : ";
        for (i=s.f;i<=s.r;i++)
            cout<<s.a[i]<<" ";
        cout<<endl;
    }
}
