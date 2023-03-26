#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;

    if(n<=2000)
        cout<<"Isento"<<endl;
    else if(n>2000 && n<=3000)
        {
            int a=n-2000;
            cout<<fixed<<setprecision(2)<<"R$ "<<a*0.08;
        }
    else if(n>3000 && n<=4500)
        {
            int b=n-3000;
            cout<<fixed<<setprecision(2)<<"R$ "<<(1000*0.08)+(b*0.18);
        }
    else if(n>4500)
    {
        int c=n-4500;
        cout<<fixed<<setprecision(2)<<"R$ "<<(1000*0.08)+(1500*0.18)+(c*0.28);
    }
    return 0;

}
