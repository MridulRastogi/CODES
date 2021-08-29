#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for(int i:v)
        cout<<i<<"   ";
    cout<<endl;
}
int main()
{
	vector<int> startTime = {1,2,3,4,6};
	vector<int> endTime   = {3,5,10,6,9};
	vector<int> profit    = {20,20,100,70,60};
	cout<<"Start Time: ";
	print(startTime);
	cout<<"End Time  : ";
	print(endTime);
	cout<<"Profit    : ";
	print(profit);
	cout<<endl;

	int start,pc=0;
    int st = startTime.size();
	auto index = 0;

    for(auto i=index; i<st; i++)
    {
        pc = pc + profit[i];
		cout<<profit[i]<<"   ";
        auto posi = std::find(startTime.begin(), startTime.end(), endTime[i]);
		index = std::distance(startTime.begin(), posi);
		i = index;
		cout << index <<endl;
	}
	cout<<endl<<"Profit: "<<pc;
	return 0;
}
