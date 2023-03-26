#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int val=1;val<=5;val++)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==val)
                count++;
        }
        cout<<val<<"->"<<count<<endl;
    }

}
