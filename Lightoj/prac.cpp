#include<bits/stdc++.h>
using namespace std;

int main()
{
    float i=0;

        for(int j=1;j<=3;j++)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
        }
    i=0.2;
    float k;

       for(int j=0;j<3;j++)
        {
            k=i;
            cout<<"I="<<i-j<<" "<<"J="<<k+1<<endl;
            i++;
        }
        cout<<"....."<<endl;
    i=2;
    float f;
    for(int j=0;j<3;j++)
        {
            f=i;
            cout<<"I="<<i-j<<" "<<"J="<<f+1<<endl;
            i++;
        }
    return 0;
}
