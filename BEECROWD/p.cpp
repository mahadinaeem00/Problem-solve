#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<=n;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag == 0)
            cout<<i<<endl;
    }
    return 0;
}
