#include <bits/stdc++.h>
using namespace std;

struct Node
{
   int data;                    //  this will be where the value will be held
   struct Node *next;           //  this will be the pointer where the location will be held for the next value
};

struct Node* head = NULL;       //  here is the creation of the haed for the linked list

void insertFromHead(int new_data)       // inserting data in the linked list and creating a new node for the next value
{
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));  //  creation of the new node
   new_node->data = new_data;                                           //  allocation of the data to be inserted in the new node
   new_node->next = head;                                               //  assigning head to new_node's pointing address
   head = new_node;                                                     //  reassigning the value of head to new_node
}

void insertFromTail(int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    head = new_node->next;
    head = new_node;
}

void display()
{
   struct Node* ptr = head;
   while (ptr != NULL)
   {
      cout << ptr->data << " ";
      ptr = ptr->next;
   }
}

/*
insertFromHead - USED TO INSERT DATA FROM THE LEFT HAND SIDE
insertFromTail - USED TO INSERT DATA FROM THE RIGHT HAND SIDE
*/

int main()
{
    insertFromTail(10);
    insertFromHead(3);
    insertFromHead(1);
    insertFromHead(7);
    insertFromHead(2);
    insertFromHead(9);
    cout<<"The linked list is: ";
    display();
    return 0;
}
