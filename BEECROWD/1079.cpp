#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a,b,c,avg=0;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        //avg=((a*2)+(b*3)+(c*5))/10.00;
         cout<<fixed<<setprecision(1)<<((a*2)+(b*3)+(c*5))/10<<endl;
    }
}
