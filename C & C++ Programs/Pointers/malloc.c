#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
// free(ptr); // This does not clears the memory but just removes the reference of the pointer to a variable.
// Wild Pointer - The pointers that are created but not intialized to anything are called wild pointers.
// Null Pointer - When a pointer is pointing to NULL. ex: int *ptr = NULL;
/* Void Pointer - It  is a pointer that has no associated data type with it.
                  A void pointer can hold address of any type and can be typecasted to any type. */
