#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    if(x==1)
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<float(4*y)<<endl;

    else if(x==2)
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<float(4.5*y)<<endl;

    else if(x==3)
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<float(5*y)<<endl;

    else if(x==4)
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<float(2*y)<<endl;

    else if(x==5)
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<float(1.50*y)<<endl;
}
