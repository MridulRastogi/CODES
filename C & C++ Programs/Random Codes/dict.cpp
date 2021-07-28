#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    string dictionary[1000], word;
    ifstream in_stream;
    in_stream.open("E:/Dictionary/english3.txt");
    cout << "File name : ";
    //cin >> filename;
    cout << endl;
    if (in_stream.fail())

    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    int i=0;
    while(! in_stream.eof())
    {
        getline(in_stream, dictionary[i]);
        i++;
    }

    int size=i;
    int a;
    bool found;

    while(word != "stop")

    {
        cout << "Search for: ";
        cin >> word;

        if(word =="stop")
            {
                cout << "Bye!" << endl;
                break;
            }

        for(int b=0; b < size; b++)
        {
            found = false;
            if (word == dictionary[b])
            {
                found = true;
                a=b;
                break;
            }
        }
        a=a+1;
        if (found==true)
        {
            cout << "'" << word << " was found in position " << a << endl;
        }
        else
        {
            cout << "Sorry, word not found." << endl;
        }
    }


}
