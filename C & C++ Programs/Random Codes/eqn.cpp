#include<iostream>
using namespace std;
int main()
{
  int n;
  int i,r;
  string bin="";
  for(i=3;i<1000;i+=3)
  {
    while(i>0)
    {
      r=i%10;
      bin = r+bin;
      i = i/10;
    }
    cout<<bin>>endl;
    bin="";
  }
  return 0;
}
