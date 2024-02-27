#include<bits/stdc++.h>
using namespace std;

vector<int> br = {1,2,3,4};
void print(vector<int>& ar)
{
    for(int i:ar) cout << i << " "; cout << endl;
}

void f(int i, vector<int>& ar)
{
    print(ar);
    if(i >= br.size())
    {
        cout << "==============>Final: ";
        print(ar);
        return;
    }
    ar.push_back(br[i]);
    f(i+1, ar);
    ar.erase(ar.end()-1);
    f(i+1, ar);
}

int main()
{
    vector<int> ar;
    f(0, ar);
    cout << endl << ar.size();
    return 0;
}
