#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
                count++;
        }
        if(count>=0)
            cout<<i<<"->>"<<count<<endl;

    }

}
