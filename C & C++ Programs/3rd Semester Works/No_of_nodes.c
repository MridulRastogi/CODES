#include<stdio.h>

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
        printf("Not Enough Memory\n");
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
int count_nodes(tree_type *root)
{
    if(root!=NULL)
    {
        count_nodes(root->left);
        c++;
        count_nodes(root->right);
    }
    return c;
}

//NODES ARE THE PARTS OF A TREE WHICH HAVE BOTH A LEFT AND RIGHT REFERENCE EXCLUDING THE ROOT.

int main()
{
    int num;
    tree_type *root=NULL, *temp;
    char opt,waste;
    do
    {
        printf("Enter the element : ");
        scanf("%d",&num);
        scanf("%c",&waste);
        temp = create(num);
        if(root==NULL)
        {
            root = temp;
            opt = 'y';
        }
        else
        {
            insert(root,temp);
            printf("Do you want to continue : ");
            scanf("%c",&opt);
        }
    }
    while(opt=='Y' || opt=='y');
    printf("\nNumber of Nodes : ",count_nodes(root),"\n");
    return 0;
}
