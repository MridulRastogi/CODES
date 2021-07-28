#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
    public:
        void setRoll(int r)
        {
            while(r>=0)
            {
                roll = r;
                cout<<"Roll Number = "<<roll<<endl;
                break;
            }
            if(r<=0)
                cout<<"Roll number should not be negative. Try again : "<<endl;
        }
};
int main()
{
    /*int n;
    cin>>n;*/
    student st;
    st.setRoll(-20);
    st.setRoll(20);
    return 0;
}
