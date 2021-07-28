#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=100000;i+=1000)
    {
        Beep(49000,10000000);
        cout<<i<<endl;
    }
    return 0;
}

/*
Beep(3000,1000);
Beep(000,1000);



*/
