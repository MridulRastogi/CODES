#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


void preorder(struct Node *root)
{
    if(root == NULL)
	   return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int idx = -1;
Node* buildTree(int nodes[])
{
    idx++;
    if(nodes[idx] == -1)
        return NULL;
    Node *current;
    current = newNode(nodes[idx]);
    current->left  = buildTree(nodes);
    current->right = buildTree(nodes);
    return current;
}

int main()
{
    int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root;
    root = buildTree(nodes);

    cout << "Pre-Order  : ";
    preorder(root);
    cout << endl;

    cout << "Inorder    : ";
    inorder(root);
    cout << endl;

    cout << "Post-Order : ";
    postorder(root);
    cout << endl;

    return 0;
}
