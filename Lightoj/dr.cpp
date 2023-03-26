#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string s1,s2;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int c=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>s1>>s2;
            if(s1=="water" || s1=="soda")
                c++;
        }
        if(c==n)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
    }
    return 0;
}
