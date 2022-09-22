#include<iostream>
#include<math.h>
using namespace std;
double calculate(double EM, double OM, double G, double dist)
{
    cout<<"\tGravitational Constant : "<<G<<endl;
    cout<<"\tEarth's Mass           : "<<EM<<endl;
    cout<<"\tObject's Mass          : "<<OM<<endl;
    double erad = 6378;
    double grav = (G*OM*EM)/(dist*dist);
    cout << "\tGRAVITY ACTING : " << grav << endl;

    return 0;
}

int main()
{
    double g = 6.67408e-11;
    double emass = 5.972e+24;
    double omass = 10;
    double dist = 6378;
    cout<<endl;
    double val = calculate(emass, omass, g, dist);
    return 0;
}
