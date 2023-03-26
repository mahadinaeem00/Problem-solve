#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    float r,area;
    int t;
    cin>>t;
    double pi = 2*acos(0.0);
    for(int i=1;i<=t;i++)
    {
        cin>>r;
        area=(2*r*2*r)-(pi*r*r);
        cout<<fixed<<setprecision(2)<<"Case "<<i<<": "<<area<<endl;
    }
    return 0;
}
