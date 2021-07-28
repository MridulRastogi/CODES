#include<iostream>
using namespace std;

typedef struct tree
{
    struct tree *left;
    int info;
    struct tree *right;
}tree_type;

tree_type *create(int num)
{
    tree_type *temp;
    temp = (tree_type *) malloc(sizeof(tree_type));
    if(temp==NULL)
    {
        cout<<"Not Enough Memory"<<endl;
    }
    else
    {
        temp->info = num;
        temp->left = NULL;
        temp->right = NULL;
    }
    return temp;
}

void insert(tree_type *root, tree_type *temp)
{
    if(temp->info < root->info)             //Checks whether the root is greater than the element inserted.
    {
        if(root->left == NULL)                  //Checks whether the left side of the root is equal to NULL.
            root->left = temp;                      //If true then left side of root has the value.
        else
            insert(root->left, temp);               //Otherwise it goes for a recursion.
    }
    else                                    //Now since the root is smaller than the element inserted so,
    {
        if(root->right == NULL)                 //Checks whether the right side of the root is equal to NULL.
            root->right = temp;                     //If true then right side of the root has the value.
        else
            insert(root->right, temp);              //Otherwise it goes for a recursion.
    }
}

void inorder(tree_type *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->info<<" ";
		inorder(root->right);
	}
}

void preorder(tree_type *root)
{
	if(root!=NULL)
	{
		cout<<root->info<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(tree_type *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
        postorder(root->right);
		cout<<root->info<<" ";
	}
}

int main()
{
    int num;
    tree_type *root=NULL, *temp;
    char opt;
    do
    {
        cout<<"Enter the element : ";
        cin>>num;
        temp = create(num);
        if(root==NULL)
        {
            root = temp;
            opt = 'y';
        }
        else
        {
            insert(root,temp);
            cout<<"Do you want to continue : ";
            cin>>opt;
        }
    }
    while(opt=='Y' || opt=='y');
    cout<<endl<<"The INORDER of the traversal of the tree is : "<<endl;
    inorder(root);  //(LEFT, NODE, RIGHT)
    cout<<endl<<endl<<"The PREORDER of the traversal of the tree is : "<<endl;
    preorder(root); //(NODE, LEFT, RIGHT)
    cout<<endl<<endl<<"The POSTORDER of the traversal of the tree is : "<<endl;
    postorder(root); //(LEFT, RIGHT, NODE)
    cout<<endl;
    return 0;
}

/*
30
20
Y
24
Y
45
Y
60
Y
50
Y
15
Y
78
N

*/
