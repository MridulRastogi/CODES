#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string word, int start, int end)
{
    while(start < end)
        if(word[start++] != word[end--])
            return false;
    return true;
}

vector<vector<int>> palindromePairs(vector<string>& s)
{
    vector<vector<int>> result;
    unordered_map<string, int> m;
    for(int i=0; i<s.size(); i++)
        m[s[i]] = i;

    for(int i=0; i<s.size(); i++)
    {
                                                        //  FIRST METHOD TO COUNTER THE PROBLEM
        if(s[i]=="")                                    // firstly targetting the empty strings to make their pairs with strings that
        {                                                   // are purely palindromic
            for(int j=0; j<s.size(); j++)
            {
                if(i!=j)
                    if(isPalindrome(s[j], 0, s[j].length()-1))
                    {
                        result.push_back({i,j});
                        result.push_back({j,i});
                    }
            }
            continue;                                       // skipping this iteration to move on to the next interation.
        }
                                                        //  SECOND METHOD TO COUNTER THE PROBLEM
        string toReverse = s[i];                            // checking if the reverse of the string is contained in the map
        int len = toReverse.length();
        reverse(toReverse.begin(), toReverse.end());
        if(m.find(toReverse) != m.end())                    // if the reverse of the current string is present then
            if(m[toReverse] != i)                                // ensuring that their indexes do not match to ensure distinctness
                result.push_back( { i , m[toReverse] } );        // pushing the indexes of the two strings in the resuslt.

                                                        //  THIRD METHOD TO COUNTER THE PROBLEM
        for(int j=1; j<len; j++)
        {
            if(isPalindrome(toReverse, 0, j-1))                 // firstly checking the palindromic property of the substrings when extracteed fromt the beginning
            {                                                       // if the string extracted is palindromic then
                string extracted = toReverse.substr(j, len-j);
                if(m.find(extracted) != m.end())                        // again checking if it is present in the map if it will be present then when placed
                    result.push_back( { i , m[extracted] } );               // that ahead of the word string will form a palindrome
            }
            if(isPalindrome(toReverse, j, len-1))
            {
                string extracted = toReverse.substr(0, j);
                if(m.find(extracted) != m.end())
                    result.push_back( { m[extracted] , i } );
            }
        }
    }
    return result;
}


int main()
{
    vector<string> s = {"abcd","dcba","lls","s","sssll"};
    vector<vector<int>> vec = palindromePairs(s);
    cout << "[";
    for(int i=0; i<vec.size(); i++)
        cout << "[" << vec[i][0] << "," << vec[i][1] << "]";
    cout << "]";
    return 0;
}
