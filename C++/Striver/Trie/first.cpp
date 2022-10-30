#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MAXN 100001
#define INF 1e18+1

struct Node
{
	Node *links[26];
	bool flag = false;

	bool containKey(char ch)                           // checks if the reference trie is present or not
    {
		return (links[ch - 'a'] != NULL);
	}

	void put(char ch, Node *node)                      // creating reference trie
    {
		links[ch - 'a'] = node;
	}

	Node *get(char ch)                                // to get the next node for traversal
    {
		return links[ch - 'a'];
	}

	void setEnd()                                    // setting flag to true at the end of the word
    {
		flag = true;
	}

	bool isEnd()                                     // checking if the word is completed or not
    {
		return flag;
	}
};

class Trie
{
    private:
	       Node* root;
    public:
    	Trie()
        {
    		root = new Node();                            // creating new obejct
    	}

    	void insert(string word)
        {
    		Node *node = root;                            // initializing dummy node pointing to root initially
    		for (int i = 0; i < word.size(); i++)
            {
    			if (!node->containKey(word[i]))
    				node->put(word[i], new Node());
    			node = node->get(word[i]);                // moves to reference trie
    		}
    		node->setEnd();
    	}

    	bool search(string word)
        {
    		Node *node = root;
    		for (int i = 0; i < word.size(); i++)
            {
    			if (!node->containKey(word[i]))
    				return false;
    			node = node->get(word[i]);
    		}
    		return node->isEnd();
    	}

    	bool startsWith(string prefix)
        {
    		Node* node = root;
    		for (int i = 0; i < prefix.size(); i++)
            {
    			if (!node->containKey(prefix[i]))
    				return false;
    			node = node->get(prefix[i]);
    		}
    		return true;
    	}
};

int main()
{
	int n = 5;
    /*
        1 - insert
        2 - search if it exists
        3 - search if it starts with
    */
	vector<int>    type  = {   1   ,    1  ,    2  ,   3  ,   2  };
	vector<string> value = {"hello", "help", "help", "hel", "hel"};
	Trie trie;
	for (int i = 0; i < n; i++)
    {
        switch(type[i])
        {
            case 1: trie.insert(value[i]);
            break;
            case 2: if (trie.search(value[i]))
        				cout << "true" << "\n";
        			else
        				cout << "false" << "\n";
            break;
            case 3: if (trie.startsWith(value[i]))
        				cout << "true" << "\n";
        			else
        				cout << "false" << "\n";
            break;
        }
	}
}
