#include<stdio.h>
int main()
{
    int *n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Inputted number: %d\n", n);
    printf("Inputted number's address: %d\n",&n);
    int *m = 3;
    printf("Value of M: %d", m);
    return 0;
}
