#include<iostream>
#include<vector>
using namespace std;
void print_by_array_method(vector<int> &V)
{
    for(int i=0; i<V.size(); i++)
        cout << V[i] << " " ;
    cout << endl;
}

int main()
{
    vector<int> a(5,6);
    cout<<"Elements of vector a:"<<endl;
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;

    //now to copy one vector to another vector:
    vector<int> v(a);
    cout<<"Elements of vector v which has copied the elements of vector a:"<<endl;
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    //when creating a vector if the element used to fill the vector is not
    // mentioned then the vector gets automatically filled by 0
    vector<int> b(5);
    cout<<"Elements of vector b:"<<endl;
    for(int i:b)
        cout<<i<<" ";
    cout<<endl<<endl;
    cout<<"ELEMENTS OF VECTOR V: ";
    print_by_array_method(v);
    cout<<"ELEMENTS OF VECTOR B: ";
    print_by_array_method(b);

    vector<vector<int>> vec;
    vector<int> vec2;
    int num;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>num;
            vec2.push_back(num);
        }
        vec.push_back(vec2);
    }
    cout << "No. of Columns: " << vec.size() << endl;
    cout << "No. of Rows   : " << vec[0].size() << " " << vec[1].size() << " " <<vec[2].size() << endl;
    return 0;
}
/*
1 2 3 4
5 6 7 8
9 8 7 6
*/
