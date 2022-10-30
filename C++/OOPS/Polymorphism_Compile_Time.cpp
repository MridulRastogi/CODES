#include<bits/stdc++.h>
using namespace std;

class CompileTimePolymorphism
{
    public:
    int add(int x, int y)
    {
        return x+y;
    }
    double add(double x, double y)
    {
        return x+y;
    }
    int add(int x, double y)
    {
        return x+int(y);
    }
    double add (double x, int y)
    {
        return x+double(y);
    }
};

int main()
{
    CompileTimePolymorphism obj;
    cout << obj.add(2 , 3) << endl;
    cout << obj.add(2.5 , 3.5) << endl;
    cout << obj.add(2 , 3.5) << endl;
    cout << obj.add(2.5 , 3) << endl;
    return 0;
}
