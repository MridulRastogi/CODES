#include <iostream>
using namespace std;
#define MAX_SIZE 101

class Stack
{
	private:
		int arr[MAX_SIZE];
		int top;
	public:
		Stack()
		{
			top= -1;
		}
		void Push(int x)
		{
			if(top==MAX_SIZE-1)
			{
				cout<<" ERROR: Stack Overflow!"<<endl;
				return;
			}
			arr[++top]=x;
		}
		void Pop()
		{
			if(top==-1)
			{
				cout<<" ERROR: Stack Underflow!"<<endl;
				return;
			}
			top--;
		}
		int Top()
		{
			return arr[top];
		}
		bool IsEmpty()
		{
			if(top==-1)
				return true;
			return false;
		}
		void print()
		{
			int i;
			cout<<endl<<" Stack: ";
			for(i=0;i<=top;i++)
				cout<<arr[i]<<" ";
			cout<<endl;
		}
};

int main()
{
	Stack S;
	int i,n,a;
	cout<<"Enter number of elements : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		S.Push(a);
	}
	S.print();
	return 0;
	/*
	S.Push(2);
	S.print();
	S.Push(5);
	S.print();
	S.Push(10);
	S.print();
	S.Pop();
	S.print();
	S.Push(12);
	S.print();
	*/
}
