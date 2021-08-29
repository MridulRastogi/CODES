#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int *ar = (int *) malloc(n * sizeof(int));
    for(i=0 ; i<n ; i++)
        cin >> *(ar+i);

    

    for(i=0; i<n; i++)
        cout << *(ar+i) << " ";
    return 0;
}
