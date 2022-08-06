#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> vec, index(n,0);
    int res[n+1];

    //INPUTTING THE ELEMENTS
    for(int i=0; i<n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    //STORING THE FREQUENCY OF EACH ELEMENT
    for(int i=0; i<n; i++)
        index[vec[i]]++;

    map<int, int> indexm;
    for(int i=0; i<n; i++)
    {
        if(m.find(vec[i]) == m.end())
            m[vec[i]] = 1;
        else
            m[vec[i]]++;
    }
    for(auto i=0)

    //ADDING ALL THE ADJACENT FREQUENCIES OF ELEMENTS
    //for(int i=1; i<n; i++)
    //    index[i] += index[i-1];


    for(int i=0; i<n; i++)
    {

    }

    //INSERTING THE ELEMENTS FROM THE "INDEX" TO THE "RES" BY
    // "VEC"s INDEX TO "INDEX"s INDEX THEN "INDEX"s ELEMENT TO "RES"s INDEX
    /*
     for(int i=0; i<n; i++)
     {
         if(index[vec[i]] != 0)
         {
             res[index[vec[i]]] = vec[i];
             index[vec[i]]--;
         }
     }
     */

    //PRINTING THE FINAL ARRAY AFTER GETTING SORTED
    for(int i=1; i<=n; i++)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}

/*
10
8 5 2 8 7 7 7 4 6 5

*/
