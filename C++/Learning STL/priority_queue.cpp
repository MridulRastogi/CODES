#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);
    maxi.push(2);
    cout<<"Size of max heap => "<<maxi.size()<<endl<<"Elements: ";
    int n = maxi.size();
    //for(int i=0; i<n; i++)
    while(!maxi.empty())
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(4);
    mini.push(2);
    //mini.push(2);
    cout << endl << "Size of min heap => " << mini.size() << endl;
    cout << "Elements: ";


    /*while(mini.empty() == false)
    {
        cout << mini.top() << " ";
        mini.pop();
    }*/

    /*for(int i=0; i<mini.size(); i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }*/
    return 0;
}
