#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& vec)
{
    for(int i:vec)
        cout << i << " ";
    cout << endl;
}

int trap(vector<int>& height)       // 0 1 0 2 1 0 1 3 2 1 2 1
{
    vector<int> rightMax;
    int cost=0, leftMax=height[0], rm=0;

    cout << "Index   Inserted in RightMax (rm)" << endl;
    for(int i=height.size()-1; i>=0; i--)       // taking all the maximum heights from the right end of the vector
    {
        cout << "  " << i << "        max ( " << height[i] << " , " << rm << " ) = ";
        rm = max(height[i], rm);                // according to this values obtained through rm will be as 1 2 3
        cout << rm << endl;
        rightMax.push_back(rm);                 // thus the final state of rm will be {1,2,3}
    }
    cout << "\nRightMax ==> ";
    print(rightMax);
    reverse(rightMax.begin(), rightMax.end());      // reversing the rm vector to obtain {3,2,1} for
    cout << "RightMax ==> ";
    print(rightMax);
    cout << endl;

    cout << "Index         LeftMax                Cost" << endl;
    cout << "       max(leftMax, height[i])   cost + min(leftMax, rightMax[i]) - height[i]\n";
    for(int i=1; i<height.size()-1; i++)            // considering the elements obtained from leftMax are {1,2,3}
    {
        cout << "  " << i << "      max ( " << leftMax << " , " << height[i] << " ) = ";
        leftMax = max(leftMax, height[i]);
        cout << leftMax << "         ";
        cout << cost << "  + min(    " << leftMax << "  ,      " << rightMax[i] << "     ) -     " << height[i] << "     =    ";
        cost += min(leftMax, rightMax[i])-height[i];
        cout << cost << endl;
    }

    return cost;
}

int main()
{
    vector<int> vec = {4,2,0,3,2,5};
    cout << "Indexes : ";
    for(int i=0; i<vec.size(); i++)
        cout << i << " ";
    cout << endl << "Elements: ";
    print(vec);
    cout << endl;
    int result = trap(vec);
    cout << endl << " Result => " << result << endl;
    return 0;
}
