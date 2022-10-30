#include<bits/stdc++.h>
using namespace std;

int result(queue<char> &i, queue<char> &o, int len)
{
    int z, c=0;
    for(z=0; z<len; z++)
    {
        if(o.front()==i.front())
        {
            o.pop();
            i.pop();
        }
        else
        {
            o.pop();
            c++;
        }
    }
    if(i.size()==o.size())
        return c;
    else
        return -1;
}

int main()
{
    int t;
    cin>>t;
    char ch;
    for(int z=1; z<=t; z++)
    {
        string in, out;
        cin>>in>>out;
        queue<char> input;
        queue<char> output;
        for(int i=0; i<in.length(); i++)
            input.push(in[i]);
        for(int j=0; j<out.length(); j++)
            output.push(out[j]);
        int res = result(input, output, out.length());
        if(res==-1)
            cout << "Case #" << z << ": IMPOSSIBLE" << endl;
        else
            cout << "Case #" << z << ": " << res << endl;
    }
    return 0;
}
