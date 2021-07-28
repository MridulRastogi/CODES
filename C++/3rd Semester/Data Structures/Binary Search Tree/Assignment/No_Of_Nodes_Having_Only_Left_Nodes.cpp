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

static int c = 0;
int count_nodes_having_only_left_child(tree_type *root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL)
        return count_nodes_having_only_left_child(root->right);
    else
        return (count_nodes_having_only_left_child(root->left) + count_nodes_having_only_left_child(root->right) + 1);
}

//IN THIS THE ROOT WILL NOT BE COUNTED AS THE NODE INSPITE OF HAVING A LEFT CHILD.

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

    cout<<endl<<"Number of Nodes having only Left Child : "<<count_nodes_having_only_left_child(root)<<endl;
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

INPUT 2---

300
200
y
240
y
450
y
600
y
500
y
150
y
780
y
125
n

INPUT 3---

130
120
y
124
y
145
y
160
y
150
y
115
y
178
n

*/
