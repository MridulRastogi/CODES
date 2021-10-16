#include<iostream>
using namespace std;

struct Listnode
{
    int data;
    Listnode* next;
    Listnode(): data(0), next(nullptr) {}
    Listnode(int x): data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

int main()
{

    return 0;
}
